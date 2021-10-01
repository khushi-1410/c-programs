#include<stdio.h>

int main()
{
    int num, remainder, copyNum, reverse = 0;
    
    printf("Enter a number:\t");
    scanf("%d", &num);
    
    copyNum = num;

   // the number is reversed inside the while loop.
   while(num > 0)
   {
      remainder = num % 10;
      reverse = (reverse * 10) + remainder;
      num = num / 10;
   }

   // here the reversed number is compared with the given number.
   if(reverse == copyNum)
   {
      printf("The number %d is a palindrome", copyNum);
   }
   else
   {
      printf("The number %d is not a palindrome", copyNum);
   }
}
