//*********************************************
// Arrays
// Review of arrays
//*********************************************

#include <iostream>
using namespace std;

int main ()
{
  int x[20], i;
  
  for(i=0; i<20; i++)
  {
    x[i] = i;
  }
  
  for(i=0; i<20; i++)
  {
    //for values & mem addresses
    cout << x[i] << " - " << &x[i] << "\n" << endl;
  }
  
  cin.ignore();
  return 0;

}
