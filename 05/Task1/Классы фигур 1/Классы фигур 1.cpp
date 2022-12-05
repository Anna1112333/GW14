#include <iostream>
#include <clocale>
using namespace std;

class figure 
{
protected:
    string name = "Фигура ";
    int sides=0;
    
public:
    figure() { };
    void print1()
    {
       
        cout <<"Фигура: " << name << "сторон: " << sides << endl;
    }
};

class triangle : public figure
{protected:
    void funk1() {
        this->name = "Треугольник ";
        this->sides = 3;
    }
public:
   
    triangle() :figure() { funk1(); };
    
   
 };

class quadrangle : public figure
{protected:
    void func1() {
        this->sides = 4;
        this->name = "Четырёхугольник ";
    }
public:
    quadrangle() :figure() { func1(); };
   
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
  }