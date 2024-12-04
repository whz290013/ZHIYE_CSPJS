//1简单算术表达式求值[1.12编程基础之函数与过程抽象01两位正整数的简单算术运算(只考虑整数远算),算术远算为，十,加法远算:，减法运算:.,乘法运算:/,整除运算:%，取余运算。
//算术表达式的格式为(运算符前后可能有空格) :运算数运算符 运算数请输出相应的结果。输人 :
//一行算术表达式。输出:
//整型算数运算的结果(结果值不一定为2位数，可能多于2位或少于2位)。.
#include <iostream>
#include <string>

int evaluateExpression(const std::string& expression) {
    int a = 0, b = 0;
    char operatorChar;

    // 处理空格，确保正确提取操作数和运算符
    std::istringstream iss(expression);
    iss >> std::ws >> a >> std::ws >> operatorChar >> std::ws >> b;

    int result;
    switch (operatorChar) {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        if (b != 0) {
            result = a / b;
        }
        else {
            std::cout << "除数不能为 0！" << std::endl;
            return -1;
        }
        break;
    case '%':
        if (b != 0) {
            result = a % b;
        }
        else {
            std::cout << "除数不能为 0！" << std::endl;
            return -1;
        }
        break;
    default:
        std::cout << "无效的运算符！" << std::endl;
        return -1;
    }

    return result;
}

int main() {
    std::string expression;
    std::cout << "请输入算术表达式：";
    std::cin >> expression;

    int result = evaluateExpression(expression);
    if (result != -1) {
        std::cout << "结果：" << result << std::endl;
    }

    return 0;
}