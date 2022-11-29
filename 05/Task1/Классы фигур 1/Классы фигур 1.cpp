#include <iostream>
#include <clocale>
using namespace std;

class figure 
{
protected:
    string name = "Фигура ";
    int sides=0;
    int si =1;
    //присвоение
    figure(string &name, int &sides)
    {
        this->name = name;
        this->sides = sides;
     };
public:
    figure(){};
    void print1()
    {
        si = 1;
        cout <<"Фигура: " << name << "сторон: " << sides << endl;
    }
};

class triangle : public figure
{protected:
        string name = "Треугольник ";
        int sides = 3;
public:
    triangle() { triangle(this->name, this->sides); }
    triangle(string name, int sides):figure(name,sides)
    {  print1(); };
 };

class quadrangle : public figure
{protected:
   
        int sides = 4;
        string name = "Четырёхугольник ";
public:
    quadrangle() { quadrangle(this->name, this->sides); }
       quadrangle( string name,int sides): figure(name,sides)
    { print1(); };
 };

int main()
{  
    setlocale(LC_ALL, "rus");
    cout << "Фигуры и колличество сторон: \n";
    figure aa;
   aa.print1();
    triangle vg;
    quadrangle fg;
  }