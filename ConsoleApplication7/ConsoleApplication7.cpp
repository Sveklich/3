#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    float array[3][5];
    for (int i = 0; i < 3; i++) {
        cout << "Введите " << 5 << " элементов для строки " << i + 1 << ":" << endl;
        for (int j = 0; j < 5; j++) {
            cin >> array[i][j];
        }
    }

    float sa[3];
    for (int i = 0; i < 3; i++) {
        float sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += array[i][j];
        }
        sa[i] = sum / 5;
    }

    cout << "Среднее арифметическое элементов строк:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Строка " << i + 1 << ": " << sa[i] << endl;
    }

    return 0;
}