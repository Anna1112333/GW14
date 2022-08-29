#include <iostream>
#include <fstream>
using namespace std;

class Calculator
{
private:
	double num1;
	double num2;
	bool checking = true;
public:
	bool isChecking()
	{
		return checking;
	}
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

	void set_num1(int num)
	{
		if (num == 0) checking = false;
		else { num1 = num; checking = true; }
	}
	void set_num2(int num)
	{
		if (num == 0) checking = false;
		else { num2 = num; if(checking!=false) checking = true; }
	}
};

int main()
{
	Calculator paar;
	setlocale(LC_ALL, "rus");
	do {
		cout << "Введите num1: ";
		int n1;
		cin >> n1;
		paar.set_num1(n1);
		cout << "Введите num2: ";
		int n2;
		cin >> n2;
		paar.set_num2(n2);
		if (paar.isChecking())
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