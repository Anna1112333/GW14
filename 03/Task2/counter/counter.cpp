#include <iostream>
#include <cstring>
using namespace std;

class counter
{
public:
    int number;
    int close = 0;
    void cases(char sign)
    {

        int type[] = { '-', '+', '=', -27 };
        if ((int)sign == type[0])
            subtract();
        else if ((int)sign == type[1])
            add();
        else if ((int)sign == type[2])
            equal();
        else if ((int)sign == type[3])
            exit();
        else cout << "\nНеверный ввод!\n";
    }

private:
    void add()
    {
        number++;
     }
   void subtract()
    {
        number--;   
    }
   void exit()
   {
       cout << "До свидания.";
      close++;
   }
   void equal()
   {
       cout << number<<"\n";
   }
   
};

int main()
{
    char agreement[5], any_sign;
    counter number1;
    setlocale(LC_ALL, "rus");
    cout << "Вы хотите указать начальное значение счётчика? Введите да или нет:";
    cin >>agreement;
    if (strlen(agreement)==3)
    { cout << "До свидания"; return 0; }
     cout << "Введите начальное значение счётчика: ";
     cin >> number1.number;
     do {
         cout << "Введите команду ('+', '-', '=' или 'x'):";
         cin >> any_sign;
        number1.cases(any_sign);
        if (number1.close == 1) break;
        } 
    while (true);
    return 0;
}