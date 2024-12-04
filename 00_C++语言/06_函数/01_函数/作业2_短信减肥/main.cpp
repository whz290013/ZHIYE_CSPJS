//短信计费【1.12编程基础之函数与过程抽象02]
//用手机发短信, 一条短信资费为0.1元, 但限定一条短信的内容在70个字以内(包括70个字)。如果你一次所发送的短信超过了70个字, 则会按照每70个字一条短信的限制把它分割成多条短信发送，假设已经知道你当月所发送的短信的字数, 试统计一下你当月短信的总资费。
//第一行是整数n, 表示当月发送短信的总次数, 接着n行, 每行一个整数, 表示每次短信的字数。
//输出 :
//输出一行, 当月短信总资费, 单位为元, 精确到小数点后1位。
#include <iostream>

double calculateCost(int n, int* words) {
    double totalCost = 0;
    for (int i = 0; i < n; i++) {
        int numSegments = (words[i] + 69) / 70;
        totalCost += numSegments * 0.1;
    }
    return totalCost;
}

int main() {
    int n;
    std::cin >> n;

    int* words = new int[n];
    for (int i = 0; i < n; i++) {
        std::cin >> words[i];
    }

    double cost = calculateCost(n, words);
    std::cout.precision(1);
    std::cout << cost << std::endl;

    delete[] words;

    return 0;
}