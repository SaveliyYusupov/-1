#include <iostream>

using namespace std;
class tr
{
    int a;
    public:

    double square2;
    int perimeter2;

    void getter()
    {
        cout << "Введите значение стороны треугольника а: ";

        inputInt();
    }
    int inputInt()
    {

        while (true)
        {
            cin >> a;
            if (isNumeric() && isRange(a, 1, 100))
                return a;
            else
                cout << "Введенное значение не соответствует типу. Попробуйте еще раз:";
        }
    }
    bool isRange(int number, int left_r, int right_r)
    {
        if ((number >= left_r) && (number <= right_r))
            return true;
        else
            return false;
    }
    bool isNumeric()
    {
        if (cin.get() == '\n')
            return true;
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return false;
        }
    }
    void square()
    {
        square2 = a * a * sqrt(3)/4;
    }
    void perimeter()
    {
        perimeter2 = 3 * a;
    }
    void show_square()
    {
        cout << "Площадь треугольника : " << square2;
    }
    void show_per()
    {
        cout << "Периметр треугольника : " << perimeter2;
    }
    int get() 
    {
        return a;
    }
};
int main()
{
    setlocale(LC_ALL, "Russian");
    tr tr1;
    int choice;
    tr1.getter();//задаем с клавиатуры значение длины стороны
    cout << "Что Вы хотите вычислить? " << endl;
    cout << "1 - Площадь треугольника: " << endl;
    cout << "2 - Периметр треугольника:" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        tr1.square();
        tr1.show_square(); break;
    case 2:
        tr1.perimeter();
        tr1.show_per(); break;
    }
    cout << endl;
    system("pause");
    return 0;
}