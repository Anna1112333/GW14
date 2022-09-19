#include <iostream>
#include <clocale>
using namespace std;

class figure 
{
protected:
    int sides_count=0;
    string fig_name = "Фигура";
    int sides;
public:
    virtual  void get_sides_count() { sides_count = sides;
    cout << fig_name << ": " << sides_count;
    }

    figure(){ sides = 0;
    string fig_name = "Фигура";
    };
    
};

class triangle : public figure
{public:
    triangle() {
        fig_name = "Треугольник";
       sides = 3;
      
    };
    void get_sides_count() override {
        sides_count = sides;
        cout <<"\n" << fig_name << ": " << sides_count;
    };
 };

class quadrangle : public figure
{public:
    quadrangle()
    {
        sides = 4;
        fig_name = "Четырёхугольник";
    };
    void get_sides_count() override {
        sides_count = sides;
        cout << "\n" << fig_name << ": " << sides_count;
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
    p->get_sides_count();
    b->get_sides_count();
    chet->get_sides_count();
}

