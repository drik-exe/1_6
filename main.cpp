/*Пользователь вводит количество конфет, полученных группой в качестве приза за участие в конкурсе и количество человек в группе.
Определить сколько конфет достанется каждому, если их честно разделить между ними (конфеты разрезать нельзя) и сколько конфет останется неразделенными.
Вывести найденные значения на экран с соответствующими пояснениями.
Пользователь вводит с клавиатуры вещественное число x. Необходимо вычислить значение y=x+425-1x. Округлите частное чисел y и x (x1).
Выведите значение x и y и x1 с точностью 2 знака после запятой, разделенные символом «;» все в одной строке. Например:
x=1.00;  y=4.00; x1=4;*/




#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    setlocale(0, "");

    int count_sweet;
    int count_students;
    cout << "Введите количество конфет: ";
    cin >> count_sweet;
    cout << endl << "Введите количество человек в группе: ";
    cin >> count_students;
    cout << endl;

    int count_every = count_sweet/count_students;
    int remain = count_sweet - (count_every*count_students);
    cout << "достанется каждому: " << count_every << endl << "останется неразделенными: " << remain << endl;

/////////////////////////////////////////////////////////////////////////////////////////////////////

    double x;
    double y;
    int x1;
    cout << "введите вещественное число x: ";
    cin >> x;
    y = (((pow((x+4), 2))/5) - (1/x));
    x1 = y/x;
    cout << fixed;

    cout.precision(2);
    cout << "x = " << x << "; " << "y = " << y << "; " << "x1 = " << x1 << ";" << endl;

    return 0;
}
