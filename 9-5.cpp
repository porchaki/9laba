#include <iostream>
using namespace std;

int main()
{
int g, c, z, a;
cout << "Enter the year" << endl;
cin >> g;
g = g - 4;
z = g % 12;
c = g % 60;
a = c % 12;
c = c / 12;

if (c == 0)
cout << "green ";
if (c == 1)
cout << "red ";
if (c == 2)
cout << "yellow ";
if (c == 3)
cout << "white ";
if (c == 4)
cout << "black ";
if (z == 0)
cout << "rat";
if (z == 1)
cout << "cow";
if (z == 2)
cout << "tiger";
if (z == 3)
cout << "rabbit";
if (z == 4)
cout << "dragon";
if (z == 5)
cout << "snake";
if (z == 6)
cout << "horse";
if (z == 7)
cout << "sheep";
if (z == 8)
cout<< "monkey";
if (z == 9)
cout << "rooster";
if (z == 10)
cout << "dog";
if (z == 11)
cout << "pig";
system ("pause");
return 0;
}