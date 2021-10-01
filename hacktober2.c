#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <time.h>

int factorial (int z)
{
    if (z==0 || z==1)
        {
                return 1;
        }
    else 
    {
        return z* factorial(z-1);
    }
}    
int main()
{
    int z;
    printf ("Enter the number whose factorial is desired");
    scanf ("%d", &z);
    printf ("Factorial of %d is %d", z, factorial(z));
    return 0;
}