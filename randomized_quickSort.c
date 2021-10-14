#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int arr[10000], n;
int partition(int arr[], int m, int p);
void interchange(int arr[], int i, int j);
void QuickSort(int arr[], int p, int q);
void show();

int main()

{

// int arr[100], n;

 int i;
 time_t start, end;
 time_t diff;

 clrscr();
 printf("\nEnter the number of elements: ");

 scanf("%d", &n);
 randomize();     //Generates random elements



// printf("\nEnter the elements: ");

 for(i=0; i<n; i++)

 {

//  scanf("%d", &a[i]);

 arr[i]=random(100);

 }

 printf("\nThe elements are ");

 for(i=0; i<n; i++)

 {

  printf("%d ", arr[i]);

 }
    start=time(NULL);
    printf("\n\nThe passes are:");
    QuickSort(arr, 0, n-1);

    end=time(NULL);

    diff=difftime(end, start);
    printf("\n\nThe sorted array is ");

    for(i=0; i<n; i++)

    printf("%d ", arr[i]);
    printf("\n\nTime taken is %ld seconds", diff);
    getch();
    return 0;

}
//-------FIND THE POSITION OF THE PARTITION-------

int partition(int arr[], int m, int p)

{
    int v=arr[m];
    int i=m;
    int j=p;

    do

    {

        do

        i++;

        while(arr[i]<v);

        do

        j--;

        while(arr[j]>v);

        if(i<j)

        interchange(arr, i, j);

    }while(i<=j);

    arr[m]=arr[j];

    arr[j]=v;

    return j;

}
//-------INTERCHANGE THE ELEMENTS-------

void interchange(int arr[], int i, int j)

{

 int p;

 p=arr[i];

 arr[i]=arr[j];

 arr[j]=p;

}
//-------QUICK SORT-------

void QuickSort(int arr[], int p, int q)

{

 int j, k, temp;

 if(p<q)    //If there are more than 1 element, divide p into 2 sub-problems

 {

  k=rand() % (q-p+1)+p;
  interchange(arr, k, p);
  j=partition(arr, p, q+1);  //j is the position of partioning element

  show();

  //Solve sub-problems

  QuickSort(arr, p, j-1);
  QuickSort(arr, j+1, q);
 }

}
void show()
{
    int j;
    printf("\n");
    for(j=0; j<n; j++)
    printf("   %d", arr[j]);
}



