﻿#include<fstream>
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
{
public:
    int quantity;
    void setting(ifstream& copy_file_in_class, home* arr1)
    {
        for (int i = 0; i < quantity; i++)
        {
            copy_file_in_class >> arr1[i].Sity;
            copy_file_in_class >> arr1[i].Street;
            copy_file_in_class >> arr1[i].number_of_house;
            copy_file_in_class >> arr1[i].number_of_quoter;
        }
        lexicogr(arr1);
        setting_in_file(arr1);
    }
 private:
    //Функция расчитывающая 
     void lexicogr(home* arr1)
     {
         for (int k = 0; k < quantity - 2; k++)  //Метод пузырька
         {
             for (int i = 0, j = 0; i < quantity - 1; i++)
             {
                 if (int(arr1[i + 1].Sity[j]) < int(arr1[i].Sity[j]))
                     swap(arr1[i], arr1[i + 1]);
                 else if (int(arr1[i + 1].Sity[j]) == int(arr1[i].Sity[j]))
                     while ((arr1[i].Sity[j] != '\0') || (arr1[i + 1].Sity[j] != '\0'))
                     {
                         j++;
                         if (int(arr1[i + 1].Sity[j]) < int(arr1[i].Sity[j]))
                         {
                             swap(arr1[i], arr1[i + 1]); break;
                         }
                         if (int(arr1[i + 1].Sity[j]) > int(arr1[i].Sity[j]))
                         {
                             break;
                         }
                     }
             }
         }
     }

     //Функция вывода класса в файл
    void setting_in_file(home* arr1)
    {
        ofstream copy_class_out;
        copy_class_out.open("out.txt");
       
        for (int i = 0; i <quantity; i++)
        {
            copy_class_out << arr1[i].Sity << " ";
            copy_class_out << arr1[i].Street << " ";
            copy_class_out << arr1[i].number_of_house << " ";
            copy_class_out << arr1[i].number_of_quoter << " \n";
        }
        copy_class_out.close();
    }   
};

int main()
{
    setlocale(LC_ALL, "Russian"); // На русский

    ifstream gh("in.txt");
    if (!gh.is_open())
    {
        cout << "Файл in.txt не открывается";
        return 1;
    }
    function func;
    gh >> func.quantity;
    home* arr;
    arr = new home[func.quantity];

    func.setting(gh, arr);

    delete[] arr;
    return 0;
    gh.close();
}
