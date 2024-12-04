#include <iostream>
#include <string>

using namespace std;

// 判断是否为甲流病人
bool isInfluenzaPatient(float temperature, int isCoughing) {
    return temperature >= 37.5 && isCoughing == 1;
}

int main() {
    int n;
    cin >> n;

    string names[n];
    float temperatures[n];
    int isCoughings[n];

    int count = 0;

    for (int i = 0; i < n; i++) {
        cin >> names[i] >> temperatures[i] >> isCoughings[i];
        if (isInfluenzaPatient(temperatures[i], isCoughings[i])) {
            cout << names[i] << endl;
            count++;
        }
    }

    cout << "被筛选为甲流的病人数量: " << count << endl;

    return 0;
}