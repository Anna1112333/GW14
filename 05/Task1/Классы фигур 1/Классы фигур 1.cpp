#include <iostream>
#include <clocale>
using namespace std;

class figure 
{
private:
    string name = "Фигура";
    int sides=0;
    //присвоение
    figure(string name, int sides)
    {
        this->name = name;
        this->sides = sides;
    };
public:
    figure() : figure(name, sides)
    {
        print1();
    };
public:
    void print1()
    {
        cout << name << "сторон: " << sides << endl;
    }
};

class triangle : public figure
{public:
        string name = "Треугольник";
        int sides = 3;
    triangle():figure()
    {
        
    };
 };

class quadrangle : public figure
{public:
        int sides = 4;
        string name = "четырёхугольник";
        quadrangle():figure()
    {
       
    };
   
};

int main()
{
    triangle vg;
    triangle* b = &vg;
    quadrangle c;
    quadrangle* chet = &c;
    setlocale(LC_ALL, "rus");
    cout << "Колличество сторон: \n";
    figure aa; aa.print1();
   
    //c.print1();
    //chet->print1();
}