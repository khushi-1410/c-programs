# include <stdio.h>

int main ()

{

    int n, i, j ;
    scanf("%d", &n) ;
  
    if (n > 1 && n <= 26) {
        for (i = n + 97 - 1; i > 97; i--) {
            printf("%c-", i) ;
        }
        printf("\b") ;

        for (j = 97; j <= 97 + n - 1; j ++) {
            printf("-%c", j) ;
        }
    }
    else if (n == 1) {
        printf("a") ;
    }
    else {
        printf("-") ;
    }
}
