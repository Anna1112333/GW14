#include <iostream>
#include <fstream>
using namespace std;

class Calculator
{
public:    // всеобщий
    double num1;
    double num2;
    double add()
    {
        return num1 + num2;
    }
    double multiply()
    {
        return num1 * num2;
    }
    double subtract_1_2()
    {
        return num1 - num2;
    }
    double subtract_2_1()
    {
        return num2 - num1;
    }
    double divide_1_2()
    {
        return num1 / num2;
    }
    double divide_2_1()
    {
        return num2 / num1;
    }
    bool checking()
    {
        return (set_num1(num1) && set_num2(num2));
    }
private:
        bool set_num1(double num1)
    {
        return static_cast<bool>(num1);
    }
    bool set_num2(double num2)
    {
        return static_cast<bool>(num2);
    }
};

int main()
{
    Calculator paar;
    setlocale(LC_ALL, "rus");
    do {
        cout << "Введите num1: ";
        cin >> paar.num1;
        cout << "Введите num2: ";
        cin >> paar.num2;
        if (paar.checking())
        {
            cout << "num1 + num2 = " << paar.add() << "\n";
            cout << "num1 - num2 = " << paar.subtract_1_2() << "\n";
            cout << "num2 - num1 = " << paar.subtract_2_1() << "\n";
            cout << "num1 * num2 = " << paar.multiply() << "\n";
            cout << "num1 / num2 = " << paar.divide_1_2() << "\n";
            cout << "num2 / num1 = " << paar.divide_2_1() << "\n";

        }
        else cout << "Неверный ввод!\n";
    } while (true);
    return 0;

}