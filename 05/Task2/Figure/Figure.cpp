#include <iostream>
#include <clocale>
using namespace std;
class figure
{
protected:
	int A = 0, B = 0, C = 0, D = 0;
	int a = 0, b = 0, c = 0, d = 0;
private:
	string name = "Фигура";
public:
	void print_info(int A, int B, int C)
	{
		cout << name << ":\n";
		cout << "Cтороны:" << "a=" << a << " b=" << b << " c=" << c << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C << endl << endl;
	}
	void print_info(int A, int B, int C, int D)
	{
		cout << name << ":\n";
		cout << "Cтороны:" << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << endl << endl;
	}

protected:
	figure(string name1, string name)
	{
		this->name = name1;    
	}
};

class triangle : public figure
{
public:
	triangle(string name1) : figure(name1, "Треугольник")
	{}
};
//равнобедренный
class isosceles_triangle : public triangle
{
public:
	
	isosceles_triangle() :triangle("Равнобедренный треугольник")
	{
		a = 10;  b = 10;  c = 15;
		A = 41;  B = 41;  C = 98;
		print_info(A, B, C);
	}
};
//равносторонний
class equilateral_triangle : public triangle
{
public:
	equilateral_triangle() : triangle("Равноcторонний треугольник")
	{
		a = 10;  b = 10;  c = 10;
		A = 60;  B = 60;  C = 60;
		print_info(A, B, C);
	}
};

//прямоугольный
class right_triangle : public triangle
{
public:
	right_triangle() : triangle("Прямоугольный треугольник")
	{
		a = 14;  b = 14;  c = 20;
		A = 45;  B = 45;  C = 90;
		print_info(A, B, C);
	}
};
//четырёхугольник
class quadrangle : public figure
{
public:
	quadrangle(string name1) : figure(name1, "Четырёхугольник")
	{}
};

//прямоугольник
class rectangle : public quadrangle
{
public:
	rectangle() : quadrangle("Прямоугольник")
	{
		a = 14;  b = 20;  c = 14; d = 20;
		A = B = C = D = 90;
		print_info(A, B, C, D);
	}
};
//квадрат
class square : public quadrangle
{
public:
	square() : quadrangle("Квадрат")
	{
		a = b = c = d = 20;
		A = B = C = D = 90;
		print_info(A, B, C, D);
	}
};
//параллелограмм
class parallelogram : public quadrangle
{
public:
	parallelogram() : quadrangle("Параллелограмм")
	{
		a = 14;  b = 20;  c = 14; d = 20;
		A = 45;  B = 135;  C = 45; D = 135;
		print_info(A, B, C, D);
	}
};

//ромб
class rhomb : public quadrangle
{
public:
	rhomb() : quadrangle("Ромб")
	{
		a = 20;  b = 20;  c = 20; d = 20;
		A = 45;  B = 135;  C = 45; D = 135;
		print_info(A, B, C, D);
	}
};
int main()
{
	setlocale(LC_ALL, "rus");
	
	figure q1 = isosceles_triangle();
	figure q2 = equilateral_triangle();
	figure q3 = right_triangle();

	figure j1 = rectangle();
	figure j2 = square();
	figure j3 = parallelogram();
	figure j4 = rhomb();

	return 0;
}

