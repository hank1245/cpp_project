#include <iostream>

class Stove {
    // 외부에서 직접 변경 불가
  private:
    int temp = 0;

  public:
    // constructor
    Stove(int temp) { setTemp(temp); }
    // getter
    int getTemp() { return temp; }

    // setter
    void setTemp(int temp) {
        if (temp < 0) {
            this->temp = 0;
        } else if (temp >= 10) {
            this->temp = 10;
        } else {
            this->temp = temp;
        }
    }
};

int main() {
    Stove stove(10);
    int temp = stove.getTemp();
    std::cout << temp;
    return 0;
}