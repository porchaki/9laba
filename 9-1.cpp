#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
int d, m, a, b;
cout << "������� ����" << endl;
cin >> d >> m;
a = d / 10;
b = d % 10;
if (a == 1)
{
if (b == 0)
cout << "������� ";
if (b == 1)
cout << "������������ ";
if (b == 2)
cout << "����������� ";
if (b == 3)
cout << "����������� ";
if (b == 4)
cout << "������������� ";
if (b == 5)
cout << "����������� ";
if (b == 6)
cout << "������������ ";
if (b == 7)
cout << "����������� ";
if (b == 8)
cout << "������������� ";
if (b == 9)
cout << "������������� ";
}
if ((a == 2) && (b == 0))
cout << "��������� ";
if ((a == 2) && (b != 0))
cout << "�������� ";
if ((a == 3) && (b == 0))
cout << "��������� ";
if ((a == 3) && (b != 0))
cout << "�������� ";
if (a != 1)
{
if (b == 1)
cout << "������ ";
if (b == 2)
cout << "������ ";
if (b == 3)
cout << "������ ";
if (b == 4)
cout << "��������� ";
if (b == 5)
cout << "����� ";
if (b == 6)
cout << "������ ";
if (b == 7)
cout << "������� ";
if (b == 8)
cout << "������� ";
if (b == 9)
cout << "������� ";
}
if (m == 1)
cout << "������";
if (m == 2)
cout << "�������";
if (m == 3)
cout << "�����";
if (m == 4)
cout << "������";
if (m == 5)
cout << "���";
if (m == 6)
cout << "����";
if (m == 7)
cout << "����";
if (m == 8)
cout << "�������";
if (m == 9)
cout << "��������";
if (m == 10)
cout << "�������";
if (m == 11)
cout << "������";
if (m == 12)
cout << "�������";
system ("pause");
return 0;
}