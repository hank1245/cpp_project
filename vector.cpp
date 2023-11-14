#include <iostream>
#include <string>
#include <vector>
int gcd_f(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int lcm_f(int a, int b) { return a * b / gcd_f(a, b); }
class Rational {
  public:
    int numerator;
    int denominator;
    Rational(int num = 0, int den = 1) : numerator(num), denominator(den) {
        int gcd = gcd_f(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }
    Rational Mul(const Rational &other) const {
        return Rational(numerator * other.numerator,
                        denominator * other.denominator);
    }
    Rational Add(const Rational &other) const {
        int lcm = lcm_f(denominator, other.denominator);
        int num = numerator * (lcm / denominator) +
                  other.numerator * (lcm / other.denominator);
        return Rational(num, lcm);
    }
    bool Equal(const Rational &other) const {
        return numerator == other.numerator && denominator == other.denominator;
    }
};
void Print( Rational r) {
    std::cout << r.numerator << "/" << r.denominator << std::endl;
}
void Print(const std::vector<Rational> &v) {
    for (Rational r : v) {
        Print(r);
    }
}
std::string NewString(const std::string &s) { return "***" + s + "***"; }
int main() {
    Rational r1, r2(5), r3(2, 8), r4;
    Print(r1); // prints 0/1
    Print(r2); // prints 5/1
    Print(r3); // prints 1/4
    r4 = r2.Mul(r3); // r4 = r2*r3
    Print(r4);       // prints 5/4
    r4 = r2.Add(r3); // r4 = r2+r3
    Print(r4);       // prints 21/4
    if (r4.Equal(Rational{42, 8}))
        std::cout << "Equal" << std::endl;
    std::vector<Rational> v1;
    v1.push_back({1});
    v1.push_back({3, 7});
    Print(v1); // prints 1/1, 3/7
    std::string s1 = "C++ programming", s2;
    s2 = NewString(s1);           // s2: "***C++ programming***"
    std::cout << s2 << std::endl; // prints ***C++ programming***
}
