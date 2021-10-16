#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    char ch;
    int count=0;

    /* Opening file in read mode */
    fptr = fopen("tale.txt","r");
    if(fptr==NULL)
    {
        printf("Can't open file. Make sure file exits.\n");
        exit(1);
    }
    
    /* Counting characters */
    do
    {
        ch = fgetc(fptr);
        count++;
    }while(ch!=EOF);

    fclose(fptr);
    printf("\n\nNumber of characters = %d",count);
    printf("\n\nProgram completed. Press any key to continue...");

    return 0;
}
