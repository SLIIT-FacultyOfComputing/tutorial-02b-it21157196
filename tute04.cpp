/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream> //add header file 

//long Factorial(int no);
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

long nCr(int n, int r) //begin nCr function
{
  long fac1=1, fac2=1, fac3=1; //creat float veriable
  long ncr; //creat float veriable

  for(int i = n; i >= 1; i--)
  {
    fac1 = fac1 * i; //calculate factorial of n

  }

  for(int j = r; j>=1; j--)
  {
    fac2 = fac2 * j; //calculate factorial of r

  }

  for(int k = (n-r); k >= 1; k--)
  {
    fac3 = fac3 * k; //calculate factorial (n-r)

  }

  ncr = fac1 / (fac2 * fac3); //calculate answer of nCr

  return ncr;
}//end nCr function

