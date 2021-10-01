#include <stdio.h>
#include <stdlib.h>
#define BITS sizeof(int) * 8
int isPositive(int n)
{
    return !(n&(1<<(BITS-1))|(!n));
}
int main()
{
    int n;
    printf("Enter a first number : ");
    scanf("%d",&n);
    int  m;
    printf("Enter a second number : ");
    scanf("%d",&m);
    if((n^m)==0)
        printf("Equal\n");
    else
        printf("Unequal\n");
	if((n&1)==1)
      printf("%d is Odd\n",n);
   else
      printf("%d is Even\n",n);
   if ((m&1)==1)
      printf("%d is Odd\n",m);
   else
      printf("%d is Even\n",m);
   isPositive(n)? printf("%d is Positive number\n",n):(n)? printf("%d is Negative number\n",n): printf("Zero\n");
   isPositive(m)? printf("%d is Positive number\n",m):(m)? printf("%d is Negative number\n",m): printf("Zero\n");
   return 0;
}
