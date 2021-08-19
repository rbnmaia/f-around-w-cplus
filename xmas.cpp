//*********************************************
// Simple x-mas tree
// Review of Iteration & Conditional Structures
//*********************************************

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{ 
    
  int i, j, lines;
  cout << "Please enter a number " << endl;
  cin >> lines;
  cin.ignore();

  cout << "\033[31mMerry Christmas! Here's your tree!" << endl; //for red text
  cout << " " << endl;
  
  for (j=1; j<=lines*2; j=j+2)
    {
      for (i=j; i<=lines*2-2; i=i+2)
      {
        cout << " ";
      }
      for (i=1; i<=j; i++) 
      {
        cout << "\033[32m*"; // for green text color
      }
      cout << endl;
    }

  cin.ignore();
    
}
