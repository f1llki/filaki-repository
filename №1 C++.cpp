#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "AaBbCcDd"; //Строчка

    //Символы с четными индексами
    cout << "str[::2] ";
    for (size_t i = 0; i < str.size(); i++) { //Читаю все индексы строчки
        if (i % 2 == 0) { //Проверка четный ли индекс
            cout << str[i]; //Вывод символов с четными индексами
        }
    }
    cout << endl; // Переход

    //Символы с нечетными индексами
    cout << "str[1::2] ";
    for (size_t i = 0; i < str.size(); i++) { //Читаю все индексы
        if (i % 2 == 1) { //Проверка нечетный ли индекс
            cout << str[i]; //Вывод символов с нечетными индексами
        }
    }
    cout << endl; //Переход

    return 0;
}