#include<stdio.h>

int factorial(int n) {
    if(n == 1)
        return 1;
    else
        return n*factorial(n-1);
}

int main() {
    int n,fact = 1,i;
    printf("Enter the Number : ");
    scanf("%d", &n);
    int ans = factorial(n);
    printf("Factorial of %d is %d", n, ans);
    return 0;
}