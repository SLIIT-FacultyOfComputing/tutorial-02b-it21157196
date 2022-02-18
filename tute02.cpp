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

/*#include <stdio.h>
int main()
{
   double salary, netSalary;
   int etype, otHrs, otRate;
   printf("Enter Employee Type : ");
   scanf("%d", &etype);
   printf("Enter Salary  : ");
   scanf("%lf", &salary);
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

#include <iostream> //add header file 
using namespace std; // add namespace std for omit having std::

int main() // main finction begin
{
  double salary, netSalary; //creat double veriable

  int etype, otHrs, otRate; //creat integer veriable

  cout<< "Enter employee type : "; //dispaly message
  cin>> etype; // read int value

  cout<<"Enter salary : "; //dispaly message
  cin>> salary; // read double value

  cout<< "Enter othrs : "; //dispaly message
  cin>> otHrs; // read int value

  switch(etype) //begin switch
  {
    case 1: otRate = 1000;
      break;

    case 2: otRate = 1500;
      break;

    default: otRate = 1700;
      break;
  } //end switch

  netSalary = salary + otHrs* otRate; //calculate total salary
  cout<< "Net salary is "<< netSalary; //display answer of total salary

  return 0;
} // end main function
