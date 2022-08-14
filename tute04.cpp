/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

/*
#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
*/

#include<iostream>
#include<iomanip>

using namespace std;

//Function protoType
long Factorial(int no);
long nCr(int n, int r);


int main (void)
{
  int n, r;

  cout << "Enter a value for n : ";
  cin >> n;
  cout << "Enter a value for r : ";
  cin >> r;
  
  cout << "nCr = ";
  cout << nCr(n,r);//Function calling
  cout << endl;


  return 0;
}
//Implement the functions
long Factorial(int no)
{
  int stor = 1;

  for(int n = no; n >= 1; n--)
  {
     stor = stor * n;
  }

  return stor;
}
long nCr(int n, int r) //nCr = n!/ r!(n−r)!
{
  return Factorial(n) / (Factorial(r) * Factorial(n - r));//Function calling and return value main function
}