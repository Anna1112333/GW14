#include <iostream>
#include <fstream>
using namespace std;

class Calculator
{
private:
	double num1;
	double num2;

public:
	bool checking = true;
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
	
	void set_num1()
	{
		cin >> num1;
		if (num1 == 0) checking = false;
	}
	void set_num2()
	{
		cin >> num2;
		if (num2 == 0) checking = false;
	}
	
};

int main()
{
	Calculator paar;
	setlocale(LC_ALL, "rus");
	do {
		cout << "Введите num1: ";
		paar.set_num1();
		cout << "Введите num2: ";
		paar.set_num2();
		if (paar.checking)
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