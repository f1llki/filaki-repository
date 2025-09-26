#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> original = {'a', '1', 'b', '2', 'c', '3'};
    vector<char> letters;
    vector<char> numbers;

    for (char c : original) {
        if (c >= 'a' && c <= 'z') {  // ������� �������� �� �����
            letters.push_back(c);
        } else if (c >= '0' && c <= '9') {  // ������� �������� �� �����
            numbers.push_back(c);
        }
    }

    // ����� ����
    for (char c : letters) {
        cout << c;
    }
    cout << endl;

    // ����� ����
    for (char c : numbers) {
        cout << c;
    }

    return 0;
}