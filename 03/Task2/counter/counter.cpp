#include <iostream>
#include <cstring>
using namespace std;

class counter
{
public:

	void cases(char sign)
	{

		int type[] = { '-', '+', '=', 'x'};
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
	int number;
	int close = 0;
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
		cout << number << "\n";
	}
public:
	void be_done()
	{
		char any_sign;
		cin >> number;
		do {
			cout << "Введите команду ('+', '-', '=' или 'x'):";
			cin >> any_sign;
			cases(any_sign);
		} while (close != 1);
	}
};

int main()
{
	string no = "no";
	string yes = "yes";
	string agreement;
	counter number1;
	setlocale(LC_ALL, "rus");
	cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
	cin >> agreement;
	cout << agreement<<endl;
	if (!agreement.compare(no))
	{
		cout << "До свидания"; return 0;
	}
	else if (!agreement.compare(yes))
	{
		cout << "Введите начальное значение счётчика: ";
		number1.be_done();
	}
	else cout << "Неверный ввод. Перезапустите прорамму.";
	return 0;
}