#include <iostream>
#include <cmath>
double suma(int nterms);//function definition

int main (void)
{
  int NMAX = 50;
  std::cout << NMAX <<"\t" << suma(NMAX) << "\n";
  NMAX = 100;
  std::cout << NMAX << "\t" << suma(NMAX) << "\n";
  return 0;
  
}
//function implementation
double suma (int nterms)
{
  double result = 0;
  for (int n = 1; n <= nterms; n += 1)// n+=1 -> n= n+1 -> n++
    {
      result += 1.0/n; // result = result + 1.0/n
  }
  return result; 
}
