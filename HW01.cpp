#include <iostream>
#include <cmath>

int main (void)
{int n = 0;
double result = 0;
for (n = 10; n <= 100; n = n+1)
{
    if (n%2 == 1 )
    {
     result = result + 1.0/n;   
    }
}
std::cout <<"el resultado obtenido de la suma de inversos es de" << " " << result << "\n";
return 0;
}