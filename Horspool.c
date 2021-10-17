//Horspool string matching algorithm

#include<stdio.h>
#include<string.h>
#define MAX 255
void shifttable(char pattern[], int table[])
{
    int m = strlen(pattern);
    for (int i = 0; i < MAX; i++)
    table[i] = m;
    for (int i = 0; i < m - 1; i++)
    table[pattern[i]] = m - 1 - i;
}

int horspool(char src[], char pat[])
{
    int m = strlen(pat), table[MAX], k;
    shifttable(pat, table);
    for (int i = m - 1; i < strlen(src);)
    {
        k = 0;
        while ( (k < m) && (pat[m - 1 - k] == src[i - k]) )
        k++;
        if (k == m)
            return i - m + 2; //Return position
        else
        i += table[src[i]];
    }
    return -1;
}

int main()
{
    char source[MAX], pattern[MAX];
    printf("Enter the source string: ");
    gets(source);
    printf("Enter a pattern string: ");
    gets(pattern);
    int pos = horspool(source, pattern);
    if (pos == -1)
        printf("Pattern NOT found\n");
    else
        printf("Pattern found at Position: %d\n", pos);
}
