#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> original = {'a', '1', 'b', '2', 'c', '3'};
    vector<char> letters;
    vector<char> numbers;

    for (char c : original) {
        if (c >= 'a' && c <= 'z') {  // Простая проверка на буквы
            letters.push_back(c);
        } else if (c >= '0' && c <= '9') {  // Простая проверка на цифры
            numbers.push_back(c);
        }
    }

    // Вывод букв
    for (char c : letters) {
        cout << c;
    }
    cout << endl;

    // Вывод цифр
    for (char c : numbers) {
        cout << c;
    }

    return 0;
}