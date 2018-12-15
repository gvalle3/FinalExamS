/* W15664768 Lupe Valle Final Exam
Directions:By listing the first six prime numbers: 
2, 3, 5, 7, 11, and 13,we can see that the 6th prime is 13.
What is the 10001st prime number? Write a program to print it.
Paste a link to your answer *
Recursion functions
int t //nth term
6*2+1=13 = p
5*2+1=11 = p
4*2+1= 9 = p if 9 % (n>1) return (t-1) * 2 + 1 = 7 =p
*/

#include <iostream>

using namespace std;
int primeRecursion(int);

int main()
{
  int n = 1001;
  cout << primeRecursion(n);
  return 0;
}

int primeRecursion(int n)
{
  int p = n * 2 + 1;
  if (p % 2 || p % 3 || p % 5 || p % 7)
    return p = (n - 1) * 2 + 1;
  if (p == 1)
    return p = 2;
  else 
    return p;
}