#include <stdio.h>
int x,queue[100];
int t=-1,n,fun,i;
void insert();
void delete();
void display();
int main()
{

    printf("Enter the size of queue: ");
    scanf("%d",&n);
    printf("Function:\n 1.Insert\n 2.delete\n 4.display\n 5.stop\n");
    do
    {
     printf("Enter the option: ");
     scanf("%d",&fun);
     switch(fun)
        {
          case 1:
          {
            insert();
            break;
          }
          case 2:
          {
            delete();
            break;
          }
          case 4:
          {
            display();
            break;
          }
          case 5:
          {
            printf("STOP");
            break;
          }
          default:
          {
            printf("Enter in valid format(1,2,3,4)");
          }
        }
    }
    while(fun!=4);
    return 0;
}
void insert()
{
    if(t>=n-1)
    {
        printf("Stack is full");
    }
    else;
    {
        printf("enter element to be inserted: ");
        scanf("%d",&x);
        t++;
        queue[t]=x;
    }
}
void delete()
{
    if(t<=-1)
    {
      printf("queue is empty");
    }
    else;
    {
        printf("deleted element: %d\n",queue[t]);
        t--;
    }
}
void display()
{
    printf("elements of queue:\n");
    for(i=0;i<=t;i++)
       printf("%d\n",queue[i]);
}
