/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

/*
#include <stdio.h>
int main()
{
   double salary, netSalary;
   int etype, otHrs, otRate;
   printf("Enter Employee Type : ");
   scanf("%d", &etype);
   printf("Enter Salary  : ");
   scanf("%f", &salary);
   printf("Enter OtHrs : ");
   scanf("%d", &otHrs); 
   
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }


   netSalary = salary + otHrs* otRate;
   printf("Net Salary is %f ", netSalary);
  
   return 0;
} */

#include<iostream>
#include<iomanip>

using namespace std;
int main (void)
{
  double salary, netSalary;
  int type,otHrs, otRate;
  
  cout << "Enter Salary and Employee Type and OtHrs : ";
  cin >> salary >> type >> otHrs;

  switch(type)
    {
      case 1 : otRate = 1000;
              break;
      case 2 : otRate = 1500;
              break;
      case 3 : otRate = 1700;
              break;
      default : cout << "Inavled Employee Type !" << endl;
      
    }

  netSalary = salary + (otRate * otHrs);
  cout << setiosflags(ios::fixed) << setprecision(2) << "Net Salary is : " << netSalary << "\n";

  return 0;
}