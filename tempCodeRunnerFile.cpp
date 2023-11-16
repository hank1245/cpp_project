#include <iostream>
#include <string>
#include <vector>
class BigUnsigned {
  private:
    std::vector<int> digits;

  public:
    BigUnsigned() : digits(1, 0) {}
    BigUnsigned(unsigned int num) {
        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }
        if (digits.empty()) {
            digits.push_back(0);
        }
    }
    BigUnsigned(const std::string &str) {
        for (int i = str.size() - 1; i >= 0; --i) {
            digits.push_back(str[i] - '0');
        }
    }
    BigUnsigned operator+(const BigUnsigned &other) const {
        BigUnsigned result;
        result.digits.clear();
        int carry = 0;
        for (size_t i = 0;
             i < digits.size() || i < other.digits.size() || carry > 0; ++i) {
            int sum = 0;
            if (i < digits.size()) {
                sum += digits[i];
            }
            if (i < other.digits.size()) {
                sum += other.digits[i];
            }
            sum += carry;

            result.digits.push_back(sum % 10);
            carry = sum / 10;
        }
        return result;
    }
    friend std::ostream &operator<<(std::ostream &os, const BigUnsigned &num);
};
std::ostream &operator<<(std::ostream &os, const BigUnsigned &num) {
    for (int i = num.digits.size() - 1; i >= 0; --i) {
        os << num.digits[i];
    }
    return os;
}
int main() {
    BigUnsigned num1(1234578912);
    BigUnsigned num2("67890000000000000");
    BigUnsigned num3 = num1 + num2;
    std::cout << num3 << std::endl; // 출력: 67890001234578912
    return 0;
}
