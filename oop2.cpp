#include <iostream>
using std::cout;
using std::string;

// 객체지향의 4대 개념 encapsulation,abstraction,inheritance,polymorphism
// encapsulation = 외부로부터 감춰졌다
// private으로 어트리뷰트를 지정하고 메소드를 통해서 값을 가져오거나 바꿀 수
// 있게 해주는것 getter setter
// abstraction 추상화 공통의 속성이나 기능을 묶어 이름을 붙임
// 자동차의 경우 시동키기, 가속 등의 자동차라면 모두 해당하는 기능을 묶어서
// 추상화 클래스를 만들어 하위 클래스에 상속 시킨다.
// polymorphism
// 메소드의 implementation을 다르게 하는것

// 해당 추상 클래스를 상속하는 모든 클래스는 askforPromotion메소드를구현해야한다
// 추상 클래스를 사용하는 가장 큰 이유가 구현해야할 사항들을 지정하기 위해서임
class AbastractEmployee {
    // =0 을 넣으면 순수가상함수이다 필수적으로 구현해야한다.
    // 순수가상함수가 아니면 오버라이딩 할 수 있지만 필수는 아님.
    virtual void AskforPromotion() = 0;
};

class Employee : AbastractEmployee {
  private:
    string name;
    int age;

  public:
    // constructor의 필수요건 이름이 클래스랑 같아야하고, reutrn타입이 없고,
    // 퍼블릭이어야함
    Employee(string name, int age) {
        this->name = name;
        this->age = age;
    }
    void AskforPromotion() {
        if (age > 30) {
            std::cout << "got promoted" << std::endl;
        } else {
            std::cout << "Sorry no prom" << std::endl;
        }
    }
    // 이름이 encapsulate되었다!
    string getName() { return name; }
    // virtual이 붙으면 동적으로 바인딩 된다.
    //  만약에 자식 클래스에 오버라이딩 된 게 없으면 이걸 실행하고
    //  오버라이딩 된 게 있으면 그걸 실행하도록 한다.
    virtual void work() {
        cout << "Working"
             << "\n";
    }
};

// public을 적어주지 않으면 private하게 상속한다는 뜻이다.
// private으로 상속한다는것은 employee의 public, protected멤버가 developer의
// private멤버가 된다는 뜻이다.
class Developer : public Employee {
    // developer는 dervied class이다
    string favoriteLang;

  public:
    // developer생성자로 받고, employee로 super하고 favoriteLang은 developer에
    // 속함
    // 상속을 받으면 반드시 constructor를 선언해야함
    Developer(string name, int age, string favoriteLang) : Employee(name, age) {
        // 상속하면 name, age는 Employee의 것이고 developer의 것은 아님!
        this->favoriteLang = favoriteLang;
    }
    void fixBug() {
        // getName을 쓸 수 있는 이유는 employee를 상속했기 때문
        // 하지만 상속한 경우 그대로 name을 사용할 수 없을까??
        // protected라면 바로 갖다쓰는것이 가능. private은 상속했어도 안되고
        // 구현한 클래스에서만
        cout << getName() << " Fixed bug using " << favoriteLang << std::endl;
    }
    // 메소드가 오버라이딩 된다
    // virtual과 override는 생략해도 된다
    virtual void work() override { cout << "coding!!!" << std::endl; }
};

int main() {
    Employee employee1 = Employee("John", 21);
    employee1.AskforPromotion();
    cout << employee1.getName() << std::endl;
    Developer hank = Developer("hank", 22, "javascript");
    hank.fixBug();
    // public으로 상속하지 않으면 상위 클래스의 메소드에 접근을 할 수 없다
    // employee의 public메소드가 상속되면서 developer의 private메소드로 간주되기
    // 때문
    hank.AskforPromotion();
    // hank.work();
    // hank는 developer타입이지만 내부적으로 Employee이기도 하기 때문에
    // Employee포인터에 저장 가능
    // 결국은 이런 형태로 사용하기 위해서 쓴다고 함
    // Employee *e1 = &hank;
    // Employee* e2 = &employee1
    // e2->work() // working
    // e1->work(); // coding!!!s
    return 0;
}

// 가상함수를 왜 사용하는지?? 그냥 오버라이딩 할 수 있는데 virtual을 붙이면 뭐가
// 달라지는지 가상함수를 사용하면 동적 바인딩이 된다. 함수는 호출되는 주소가
// 바인딩이 되는데 컴파일 타임에,
// virtual을 사용하면 호출 바인딩을 런타임까지 미룰 수 있다.
// 그래서 미루고 나중에 파생클래스에서 오버라이딩 되면 가상함수의 base는
// 부를수가 없어지고 파생클래스에서의 함수로 재정의된다

// 부모 클래스를 base class 자식 클래스를 derived class라고 함
//  다형성을 가장 많이 사용하는 경우 = 부모클래스 타입의 레퍼런스를 이용해서
//  자식 클래스 인스턴스를 레퍼런스하는 경우에 사용 = 업캐스팅 자식이
//  오버라이딩한 형식의 메소드를 부모 클래스 레퍼런스를 통해서 호출한다 근데
//  이게 왜 필요하지?
// for loop등을 실행할때 업캐스팅을 해놓으면 부모 클래스의 포인터 배열로
// 간주하고 동일한 방법으로 작동 가능
//  shape라는 기반 클래스가 있고 원, 삼각형, 사각형 클래스가 있을때, 각각의 넓이
//  계산 방법은 다형성을 이용해서 따로 구현하고
//   부모 클래스 포인터를 이용해서 각각의 모양의 생성자 이용해서 생성된
//   인스턴스들을 가져와서 업캐스팅한 다음
//  업캐스팅된 포인터들을 포인터배열에 담아서 특정 함수에 넘겨주면
//  그 함수에서 동일한 코드로 넓이를 계산할 수 있다!!