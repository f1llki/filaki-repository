#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "AaBbCcDd"; //�������

    //������� � ������� ���������
    cout << "str[::2] ";
    for (size_t i = 0; i < str.size(); i++) { //����� ��� ������� �������
        if (i % 2 == 0) { //�������� ������ �� ������
            cout << str[i]; //����� �������� � ������� ���������
        }
    }
    cout << endl; // �������

    //������� � ��������� ���������
    cout << "str[1::2] ";
    for (size_t i = 0; i < str.size(); i++) { //����� ��� �������
        if (i % 2 == 1) { //�������� �������� �� ������
            cout << str[i]; //����� �������� � ��������� ���������
        }
    }
    cout << endl; //�������

    return 0;
}