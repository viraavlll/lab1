#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");
    int num;
    cout << "Введiть кiлькiсть рядкiв:";
    cin >> num;
    for (int i = 0; i < num; i++) {
        for (int x = 1; x <= num - i; x++) {
            cout << " ";
        }
        for (int x = 0; x <= i; x++) {
            cout << i;
        }
        for (int x = 0; x <= i - 1; x++) {
            cout << '+';
        }
        cout << '\n';
     
    }
    return 0;
}