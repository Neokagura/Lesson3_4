
#include <iostream>
using namespace std;
#include <string>
int main()
{
    setlocale(LC_ALL, "Russian");
    int exp;
    int level = 1;
    string prikol;
    cout << "Введите число очков опыта: ";
    cin >> exp;
    cout << "-----Считаем-----\n";
    if (exp < 1000) {
        cout << "Ваш уровень: " << level;
    }
    else if (exp >= 1000 && exp < 2500) {
        cout << "Ваш уровень: " << level++;
    }
    else if (exp >= 2500 && exp < 5000) {
        cout << "Ваш уровень: ";
        level = 3;
        cout << level;
    }
    else  {
        cout << "Уровень: Бог";
    }
    


}

