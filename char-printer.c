#include <iostream>
using namespace std;

int main ()
{
  int base, height;
  char printable;
  cout << "Insert the base lenght: ";
  cin >> base;
  cout << "Insert the height lenght: ";
  cin >> height;
  cout << "Insert the character to print: ";
  cin >> printable;
  cin.ignore();
  cout << endl;
  
  for(int i = 0; i < height; i++){
      for(int j = 0; j < base; j++){
          cout << printable;
          }
          cout << endl;
      }
  cin.ignore();
  return 0;

}







