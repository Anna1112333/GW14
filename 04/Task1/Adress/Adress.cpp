#include<fstream>

#include <iostream>
using namespace std;
class home
{
public:
    string Sity;
    string Street;
    int number_of_house;
    int number_of_quoter;
};
class function
{public:
    int quantity;
    void setting(ifstream& copy_file_in_class, home* arr1)
    {
        for (int i = 0; i < quantity; i++)
        {
            copy_file_in_class >> arr1[i].Sity;
            copy_file_in_class >> arr1[i].Street;
            copy_file_in_class >> arr1[i].number_of_house;
            copy_file_in_class >> arr1[i].number_of_quoter;
        }setting_in_file(arr1);
    }
    //Функция вывода класса в файл
private:
    void setting_in_file(home* arr1)
    {
        ofstream copy_class_out;
        copy_class_out.open("out.txt");
        cout << 1234 << arr1[1].Street;
        for (int i = quantity - 1; i >= 0; i--)
        {
            copy_class_out << arr1[i].Sity<<" ";
            copy_class_out << arr1[i].Street<<" ";
            copy_class_out << arr1[i].number_of_house<<" ";
            copy_class_out << arr1[i].number_of_quoter<<" \n";
        }
        copy_class_out.close();
    }
};

int main()
{
    setlocale(LC_ALL, "Russian"); // На русский
         
    ifstream gh("in.txt");
    if(!gh.is_open())
    {
        cout << "Файл in.txt не открывается";
        return 1;
    }
    function func;
    gh >> func.quantity;
    home* arr;
    arr = new home[func.quantity];

    func.setting( gh, arr);
    
    delete[] arr;
    return 0;
    gh.close();
}
