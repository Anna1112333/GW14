#include <iostream>
#include <clocale>
using namespace std;

class figure
{
public:
    void print_info()
    {       
            if (ff) cout << "Правильная" << endl;
            else cout << "Неправильная" << endl;
       
        cout << fig_name << ":\n";
        cout << "Cтороны:" << "a=" << a << " b=" << b << " c=" << c;
        if (sides == 4) cout << " d=" << d;
        cout << endl;
        cout << "Углы: A=" << A << " B=" << B << " C=" << C;
        if (sides == 4) cout << " D=" << D;
        cout << endl << endl;
        
    }

protected:
    bool ff=true;
    virtual void ff_l(int ff)
    {
        this->ff = ff;
    }
    int sides;
    int A = 0, B = 0, C = 0, D = 0;
    int a = 0, b = 0, c = 0, d = 0;
    string fig_name = "Фигура";
    figure(int sides)
    {
        
        sides = 0;
    }
};

class triangle : public figure
{
public:
    triangle() : figure(3)
    {
        sides = 3;
        fig_name = "Треугольник";
    }
};
//равнобедренный
class isosceles_triangle : public triangle
{
public:
    isosceles_triangle() : triangle()
    {
       
        a = 50;  b = 10;  c = 15;
        A = 41;  B = 41;  C = 98;
        fig_name = "Равнобедренный треугольник";
        if (!(a == b && A == B) || (a == c && A == C) || (b == c && B == C)) 
            ff = false;
         void ff_l(bool &ff); 
        
    }
};
//равносторонний
class equilateral_triangle : public triangle
{
public:
    equilateral_triangle() : triangle()
    {
        a = 10;  b = 10;  c = 10;
        A = 60;  B = 60;  C = 10;
        fig_name = "Равноcторонний треугольник";
        if (!(A==C && a==c && b==c && B==C))
            ff = false;
        void ff_l(bool& ff);
        
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
        if (!(A == 90 ||  B == 90 || C==90))
            ff = false;
        void ff_l(bool& ff);
    }
};
//четырёхугольник
class quadrangle : public figure
{
public:
    quadrangle() : figure(4)
    {
        sides = 4;
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
        A = B = C = D = 91;
        fig_name = "Прямоугольник";
        if (!(A == 90 && a == c && b == d && B == 90 && C ==90 && D ==90))
            ff = false;
        void ff_l(bool& ff);
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
        if (!(A == 90 && D==90 && a == c && b == c && d==c && B == 90 && C ==90))
            ff = false;
        void ff_l(bool& ff);
    }
};
//параллелограмм
class parallelogram : public quadrangle
{
public:
    parallelogram() : quadrangle()
    {
        a = 14;  b = 20;  c = 14; d = 20;
        A = 45;  B = 135;  C = 1; D = 135;
        fig_name = "Параллелограмм";
        if (!(A == C && a == c && b == d && B == D))
            ff = false;
        void ff_l(bool& ff);
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
        if (!(A == C && a == c && b == c && d==c && B == C && D==C))
            ff = false;
        void ff_l(bool& ff); 
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

    q1.print_info();
    q2.print_info();
    q3.print_info();

    j1.print_info();
    j2.print_info();
    j3.print_info();
    j4.print_info();
    return 0;
}