#include <iostream>
#include <clocale>
using namespace std;

class figure 
{
private:
    int sides_count=0;
    string fig_name = "Фигура";
    int sides;
protected:
    figure()
public:
    figure()
    { sides = 0;
    string fig_name = "Фигура";
    };
    
};

class triangle : public figure
{public:
    triangle()
    {
       string fig_name = "Треугольник";
       int sides = 3;
     };
 };

class quadrangle : public figure
{public:
    quadrangle()
    {
        int sides = 4;
        string fig_name = "Четырёхугольник";
    };
   
};
int main()
{
    figure a;
    figure* p = &a;
    triangle vg;
    triangle* b = &vg;
    quadrangle c;
    quadrangle* chet = &c;
    setlocale(LC_ALL, "rus");
    cout << "Колличество сторон: \n";
    cout << p->sides << p.figname;
   
}