#include <stdio.h>
void main()
{
    int m, h, i = 1, a, j, b = 1;

    printf("\n Enter a Month No. of 2021 :- ");
    scanf("%d", &m);
    /* Program for finding a day any month of 2021 */

    switch (m)
    {
    case 1:
        a = 6;
        j = 31;
        break;
    case 2:
        a = 2;
        j = 28;
        break;
    case 3:
        a = 2;
        j = 31;
        break;
    case 4:
        a = 5;
        j = 30;
        break;
    case 5:
        a = 7;
        j = 31;
        break;
    case 6:
        a = 3;
        j = 30;
        break;
    case 7:
        a = 5;
        j = 31;
        break;
    case 8:
        a = 1;
        j = 31;
        break;
    case 9:
        a = 4;
      
        j = 30;
          break;

    case 10:
        a = 6;
        j = 31;
        break;
    case 11:
        a = 2;
    
        j = 30;
            break;

    case 12:
        a = 4;
        j = 31;

        break;

    default:
        printf("invalid");
    }

    /* Starting day is to be adjusted under the respective dar*/

    printf("\n\n\n");
    printf("\t\t\t Month - %d - 2021 \n\n", m);
    printf("  \t SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n\n");

    switch (a)
    {
    case 1:
        printf("\t%d", i);
        break;
    case 2:
        printf("\t\t%d", i);
        break;
    case 3:
        printf("\t\t\t%d", i);
        break;
    case 4:
        printf("\t\t\t\t%d", i);
        break;
    case 5:
        printf("\t\t\t\t\t%d", i);
        break;
    case 6:
        printf("\t\t\t\t\t\t%d", i);
        break;
    case 7:
        printf("\t\t\t\t\t\t\t%d", i);
        break;

    default:
        break;
    }

    h = 8 - a;               /*The starting day is subtracted from 8   peli row ma ketla ank lakhva e nakki karva*/
    for (i = 2; i <= h; i++) /* to display the first row*/
    {
        printf("\t%d", i);
      
        
    
    }
  printf("\n"); 
    for (i = h + 1; i <= j; i++) /*to continue with secound row onwards */
    {
        if (b == 8) /* to terminate the line after every week*/
        {
            printf("\n");
            b = 1;
        }
        printf("\t%d", i);
        b++;
    }
}
