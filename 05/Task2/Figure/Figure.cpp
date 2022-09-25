#include <iostream>
#include <clocale>
using namespace std;
class figure
{
public:
void print_info(int i)
{
    cout << fig_name << ":\n";
    cout << "Cтороны:" << a << " " << b << " " << c; 
    cout << (i == 4 ? d : 0) << endl;
    cout << "Углы:"<<A<<" "<<B<<" "<<C<<endl;
    cout << (i == 4 ? D : 0) << endl;
}
//protected:
    string fig_name = "Фигура";
    int sides;
    int A=0, B=0, C=0, D=0;
    int a=0, b=0, c=0, d=0;
    figure() : figure(fig_name) 
    { this->fig_name = fig_name; }
    figure(string fig_name) 
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
};
class triangle : public figure
{
public:
    triangle() 
    {
        int a, b, c, A, B, C;
        string fig_name = "Треугольник";
    };
};
//равнобедренный
class isosceles_triangle : public triangle 
{
    isosceles_triangle()
    {
        int a = 10;
        int b = 10;
        int c = 15;
        int A = 41;
        int B = 41;
        int C = 98;
    }
};


int main()
{ 
    figure a = figure();
    figure p = triangle();
  
    triangle vg;
    triangle* b = &vg;
    setlocale(LC_ALL, "rus");
   p.print_info(3);
}

