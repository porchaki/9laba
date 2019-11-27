# include <iostream>
# include <windows.h>
# include <cmath>

using namespace std;

int main ()

{
  setlocale(LC_ALL,"russian");

  char S;
  int N;
  cout << "¬ведите направление (ЂNї Ч север, ЂWї Ч запад, ЂSї Ч юг, ЂEї Ч восток): ";
  cin >> S;
  cout << "¬ведите команду дл€ робота (0 Ч продолжать движение, 1 Ч поворот налево, -1 Ч поворот направо): ";
  cin >> N;
  cout << "Ќаправление - "; 
  switch (N) {
    case 1: switch (S) {
   		case 'N': cout << "W"; break;
   		case 'S': cout << "E"; break;  
   		case 'W': cout << "S"; break;
   		case 'E': cout << "N"; break;
    } break ;
	case -1: switch (S) {
   		case 'N': cout << "E"; break;
   		case 'S': cout << "W"; break;  
   		case 'W': cout << "N"; break;
   	    case 'E': cout << "S"; break;
	} break;
	case 0: switch (S) {
   		case 'N': cout << "N"; break;
   		case 'S': cout << "S"; break;  
   		case 'W': cout << "W"; break;
   	    case 'E': cout << "E"; break;
	} break;
   }
      
   cout << endl; 
   system ("pause");
   return 0;
}