#include <iostream>
# include <windows.h>
# include <cmath>
using namespace std;
int main(){

int x; 
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
 cin>>x;
switch (x / 100)
{
  case 1: cout << "���"; break;
  case 2: cout << "������"; break;
  case 3: cout << "������"; break;
  case 4: cout << "���������"; break;
case 5: cout << "�������"; break;
	case 6: cout << "��������"; break;
case 7: cout << "�������"; break;
	case 8: cout << "���������"; break;
		
  case 9: cout << "���������"; break;
	  
}
 
switch ((x / 10) % 10)
{
  case 1:
    switch (x % 10)
    {
      case 0: cout << " ������"; break;
      case 1: cout << " �����������"; break;
      case 2: cout << "����������"; break;
		  case 3: cout << "����������"; break;
      case 4: cout << "������������"; break;
		  case 5: cout << "����������"; break;
			  case 6: cout << "�����������"; break;
        case 7: cout << "����������"; break;
			case 8: cout << "������������"; break;
       case 9: cout << " ������������"; break;
    }
    break;
  case 2: cout << "��������"; break;
	  case 3: cout << " ��������"; break;
	case 4: cout << " �����"; break;
	case 5: cout << " ���������"; break;
	case 6: cout << " ����������"; break;
	case 7: cout << " ���������"; break;
	case 8: cout << " �����������"; break;
							  
 
  case 9: cout << "���������"; break;
}
 
switch ((x / 10) % 10)
{
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    switch (x % 10)
    {
      case 1: cout << " ����"; break;
    case 2: cout << " ���"; break;
	case 3: cout << " ���"; break;
	case 4: cout << " ������"; break;
	case 5: cout << " ����"; break;
	case 6: cout << " �����"; break;
	case 7: cout << " ����"; break;
	case 8: cout << " ������"; break;
      case 9: cout << " ������"; break;
    }
    break;
}
system ("pause");
return 0;
}
