
#include <stdio.h>
#include <stdlib.h>
#define Max_Length 8

int main()
{
    int data[Max_Length];
    int i, j, n, c;

    printf("\nEnter the data");
    for (i = 0; i < Max_Length; i++)
    {
        scanf("%d", &data[i]);
    }
    n = Max_Length;
    do
    {
        for (i = 0; i < n - 1; i++)
        {
            if (data[i] > data[i + 1])
            {
                data[i] = data[i] + data[i + 1];
                data[i + 1] = data[i] - data[i + 1];
                data[i] = data[i] - data[i + 1];
            }
        }
        n = n - 1;

        for (i = Max_Length - 1, c = 0; i >= c; i--)
        {
            if (data[i] < data[i - 1])
            {
                data[i] = data[i] + data[i - 1];
                data[i - 1] = data[i] - data[i - 1];
                data[i] = data[i] - data[i - 1];
            }
        }
        c = c + 1;

    } while (n != 0 && c != 0);
    printf("The sorted elements are:");
    for (i = 0; i < Max_Length; i++)
    {
        printf("%d\t", data[i]);
    }
}