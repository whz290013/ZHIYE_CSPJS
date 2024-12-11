#include <iostream>
std::string subtractLargeNumbers(const std::string& num1, const std::string& num2) {
    std::string result;
    int carry = 0;
    for (int i = num1.size() - 1; i >= 0; i--) {
        int digit1 = num1[i] - '0';
        int digit2 = (i >= num2.size() ? 0 : num2[i] - '0');
        int diff = digit1 - digit2 - carry;
        if (diff < 0) {
            diff += 10;
            carry = 1;
        }
        else {
            carry = 0;
        }
        result = char(diff + '0') + result;
    }
    while (result.size() > 1 && result[0] == '0') {
        result.erase(0, 1);
    }
    return result;
}
int main() {
    std::string num1, num2;
    std::cout << "请输入被减数: ";
    std::cin >> num1;
    std::cout << "请输入减数: ";
    std::cin >> num2;
    std::string difference = subtractLargeNumbers(num1, num2);
    std::cout  << difference << std::endl;
    return 0;
}