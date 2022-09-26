#include <iostream>
#include <clocale>
using namespace std;
class figure
{
public:
void print_info(int i)
{
    cout << fig_name << ":\n";
    cout << "Cтороны:" <<"a=" << a << " b=" << b << " c=" << c;
    if (i == 4) cout <<" d="<< d; 
    cout << endl;
    cout << "Углы: A="<<A<<" B="<<B<<" C="<<C;
    if (i == 4) cout <<" D=" << D; 
    cout << endl<<endl;
}
int sides;
protected:
    string fig_name = "Фигура";
    int A=0, B=0, C=0, D=0;
    int a=0, b=0, c=0, d=0;
    figure(int i) { sides = i; }
 };

class triangle : public figure
{
public:
    triangle(): figure(3)
    {        
        fig_name = "Треугольник";
    }
};
//равнобедренный
class isosceles_triangle : public triangle 
{public:
    isosceles_triangle(): triangle()
    {
        a = 10;  b = 10;  c = 15;
        A = 41;  B = 41;  C = 98;
        fig_name = "Равнобедренный треугольник";
    }
};
//равносторонний
class equilateral_triangle : public triangle
{
public:
    equilateral_triangle() : triangle()
    {
        a = 10;  b = 10;  c = 10;
        A = 60;  B = 60;  C = 60;
        fig_name = "Равноcторонний треугольник";
    }
};

//прямоугольный
class right_triangle : public triangle
{
public:
    right_triangle() : triangle()
    {
        a = 14;  b = 14;  c = 20;
        A = 45;  B = 45;  C = 90;
        fig_name = "Прямоугольный треугольник";
    }
};

class quadrangle : public figure
{
public:
    quadrangle() : figure(4)
    {
        fig_name = "Четырёхугольник";
    }
};

//прямоугольник
class rectangle : public quadrangle
{
public:
    rectangle() : quadrangle()
    {
        a = 14;  b = 20;  c = 14; d = 20;
        A = B = C = D= 90;
        fig_name = "Прямоугольник";
    }
};
//квадрат
class square : public rectangle
{
public:
    square() : rectangle()
    {
        a = b = c = d = 20;
        fig_name = "Квадрат";
    }
};
//параллелограмм
class parallelogram : public quadrangle
{
public:
    parallelogram() : quadrangle()
    {
        a = 14;  b = 20;  c = 14; d = 20;
        A = 45;  B = 135;  C = 45; D = 135;
        fig_name = "Параллелограмм";
    }
};

//ромб
class rhomb : public quadrangle
{
public:
    rhomb() : quadrangle()
    {
        a = 20;  b = 20;  c = 20; d = 20;
        A = 45;  B = 135;  C = 45; D = 135;
        fig_name = "Ромб";
    }
};
int main()
{     
    figure q1 = isosceles_triangle();
    figure q2 = equilateral_triangle();
    figure q3 = right_triangle();

    figure j1 = rectangle();
    figure j2 = square();
    figure j3 = parallelogram();
    figure j4 = rhomb();
    setlocale(LC_ALL, "rus");
 
   q1.print_info(q1.sides);
   q2.print_info(q2.sides);
   q3.print_info(q3.sides);

   j1.print_info(j1.sides);
   j2.print_info(j2.sides);
   j3.print_info(j3.sides);
   j4.print_info(j4.sides);
   return 0;
}

