#include <stdio.h>
#include <math.h>
#define PI 3.14
void main(){
    float area,x,y;
    int read;
    printf("1-Area OF circle \n2-Area of Traingle\n3-Area of rectangle\n4-Area of Rombes\n5-area of square\n6-Area of pendagen\n7-Area of Hexagen \n");
    printf("Enter your Choice : ");
    scanf("%d",&read);
    switch(read){
        case 1:printf("Enter Radis : ");
                scanf("%f",&x);
                area=x*x*PI;
                break;
        case 2:printf("Enter base and hight : ");
                scanf("%f%f",&x,&y);
                area=1/2*x*y;
                break;
         case 3:printf("Enter Length and Barth : ");
                scanf("%f%f",&x,&y);
                area=x*y;
                break;
         case 4:printf("Enter Diaganels : ");
                scanf("%f%f",&x,&y);
                area=1/2*x*y;
                break;
         case 5:printf("Enter side :");
                scanf("%f",&x);
                area=x*x;
                break;
         case 6:printf("Enter Side : ");
                scanf("%f%f",&x);
                area=1/4*sqrt(5*(5+2*sqrt(5)))*x*x;
                break;
         case 7:printf("Enter Side : ");
                scanf("%f%f",&x);
                area=3*sqrt(3)/2*x*x;
                break;
        default: printf("Wrong Output\n");
        
    }
    printf("Area : %f \n",area);
}