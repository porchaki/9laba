#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
int d, m, a, b;
cout << "Введите дату" << endl;
cin >> d >> m;
a = d / 10;
b = d % 10;
if (a == 1)
{
if (b == 0)
cout << "десятое ";
if (b == 1)
cout << "одиннадцатое ";
if (b == 2)
cout << "двенадцатое ";
if (b == 3)
cout << "тринадцатое ";
if (b == 4)
cout << "четырнадцатое ";
if (b == 5)
cout << "пятнадцатое ";
if (b == 6)
cout << "шестнадцатое ";
if (b == 7)
cout << "семнадцатое ";
if (b == 8)
cout << "восемнадцатое ";
if (b == 9)
cout << "девятнадцатое ";
}
if ((a == 2) && (b == 0))
cout << "двадцатое ";
if ((a == 2) && (b != 0))
cout << "двадцать ";
if ((a == 3) && (b == 0))
cout << "тридцатое ";
if ((a == 3) && (b != 0))
cout << "тридцать ";
if (a != 1)
{
if (b == 1)
cout << "первое ";
if (b == 2)
cout << "второе ";
if (b == 3)
cout << "третье ";
if (b == 4)
cout << "четвертое ";
if (b == 5)
cout << "пятое ";
if (b == 6)
cout << "шестое ";
if (b == 7)
cout << "седьмое ";
if (b == 8)
cout << "восьмое ";
if (b == 9)
cout << "девятое ";
}
if (m == 1)
cout << "января";
if (m == 2)
cout << "февраля";
if (m == 3)
cout << "марта";
if (m == 4)
cout << "апреля";
if (m == 5)
cout << "мая";
if (m == 6)
cout << "июня";
if (m == 7)
cout << "июля";
if (m == 8)
cout << "августа";
if (m == 9)
cout << "сентября";
if (m == 10)
cout << "октября";
if (m == 11)
cout << "ноября";
if (m == 12)
cout << "декабря";
system ("pause");
return 0;
}