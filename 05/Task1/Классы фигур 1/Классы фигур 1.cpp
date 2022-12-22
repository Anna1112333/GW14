#include <iostream>
#include <clocale>
using namespace std;

class figure 
{
private:
    string name = "Фигура ";
    int sides=0;
    
public:
    void func1(int a, string b) {
        this->sides = a;
        this->name = b;
    }
    figure() { };
    void print1()
    {
     cout <<"Фигура: " << name << "сторон: " << sides << endl;
    }
};


class triangle : public figure
{  
public:
   triangle() :figure() { func1(3,"Треугольник"); };
};


class quadrangle : public figure
{
public:
    quadrangle() :figure() { func1(4, "Четырехугольник"); };
};

int main()
{  
    setlocale(LC_ALL, "rus");
    cout << "Фигуры и колличество сторон: \n";
    figure aa;
   aa.print1();
    
   triangle vg;
    vg.print1();

    quadrangle fg;
    fg.print1();
   
    return 0;
  }