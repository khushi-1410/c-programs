#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int p = n;
    int x;
    int s = 0;
    int check = 0;
    while (p > 0)
    {
        p = p / 10;
        s++;
    }

    p = n;
    while (p > 0)
    {
        x = p % 10;
        p = p / 10;

        check = pow(x, s) + check;
    }
    if (check == n)
        printf("number is armstrong");
    else
    {
        printf("number is not a armstrong");
    }
}