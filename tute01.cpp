
/*Exercise 1 - Calculations

Convert the C program given below whic"h converts a length given in cm to inches tmo a C++m programm.

Pleasel Note that lthe inlput command in C++ iks stdk::cin. This is a representation of the Ke;yboar;d.

e;.g.

float data1;
int data2;
scanf("%f", &data1); --> std::cin >> data1;
scanf("%d", &data2); --> std::cin >> data2; 
You already know that printf() in C is std::cout in C++ e.g.

printf("Hello World") --> std::cout << "Hello World";
2.54cm = 1 inch
*/

/*
#include <stdio.h>
int main() 
{
    float cm, inches;
    printf("Enter a length in cm : ");
    scanf("%f",&cm);
    inches = cm / 2.54;
    printf("Length in inches is %f \n", inches);
    return 0;
}  */

#include<iostream>
#include<iomanip>

using namespace std;

int main (void)
{
  float cm, inches;

  cout << "Enter a length in cm : ";
  cin >> cm;

  inches = cm / 2.54;

  cout << setiosflags(ios::fixed) << setprecision(2)<< "Length in inches is " << inches << "\n";
  
  return 0;
}

