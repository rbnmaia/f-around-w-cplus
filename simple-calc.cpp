//*********************************************
// Functions
// Review of c++ functions simple calculator
//*********************************************

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//base operations

int sum (int x, int y)
{
  int z;
  z = x+y;
  return(z);
}

int sub (int x, int y)
{
  int z;
  z = x-y;
  return(z);
}

int mult (int x, int y)
{
  int z;
  z = x*y;
  return(z);
}

int division (int x, int y)
{
  int z;
  z = x/y;
  return(z);
}

int main ()
{
  // control variables
  int a, b, result;
  string op = " ";
  
  cout << "Please enter two numbers: " << endl;
  cin >> a;
  cin.ignore();
  cin >> b;
  cin.ignore();
  
  cout << "Simple calculator" << endl;
  cout << "1. Sum" << "\n" << "2. Subtraction" << "\n" << "3. Multiplication" << "\n" << "4. Division" << endl;
  cout << "Please enter the operation name: " << endl;
  cin >> op;
  cin.ignore();
  
  if (op=="sum")
  {
    result = sum(a,b);
  }
  else if (op=="division")
  {
   result = division(a,b);
  }
  else if (op=="mult")
  {
   result = mult(a,b);
  }
  else if (op=="sub")
  {
    result = sub(a,b);
  }
  else
  {
    cout << "Invalid option entered.";
    return 1;
  }
  
  cout << result;
  
  cin.ignore();

}
