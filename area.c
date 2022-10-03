#include <stdio.h>
#include <math.h>
#define PI 3.14
void main(){
    float area,x,y;
    int read;
    printf("1-Area OF circle \n2-Area of Triangle\n3-Area of rectangle\n4-Area of Rhombus\n5-area of square\n6-Area of pentagon\n7-Area of Hexagon \n");
    printf("Enter your Choice : ");
    scanf("%d",&read);
    switch(read){
        case 1:printf("Enter Radius : ");
                scanf("%f",&x);
                area=x*x*PI;
                printf("Area : %.3f \n",area);// Area will be printed upto 3 decimal places
                break;
        case 2:printf("Enter base and height : ");
                scanf("%f%f",&x,&y);
                area=(x*y)/2; //modified the formula 
                printf("Area : %.3f \n",area);
                break;
         case 3:printf("Enter Length and Breadth : ");
                scanf("%f%f",&x,&y);
                area=x*y;
                printf("Area : %.3f \n",area);
                break;
         case 4:printf("Enter Diagonnals : ");
                scanf("%f%f",&x,&y);
                area=(x*y)/2;//modified the formula
                printf("Area : %.3f \n",area);
                break;
         case 5:printf("Enter side :");
                scanf("%f",&x);
                area=x*x;
                printf("Area : %.3f \n",area);
                break;
         case 6:printf("Enter Side : ");
                scanf("%f",&x);
                area=(sqrt(5 * (5 + 2 * (sqrt(5)))) * x * x) / 4; // %f will happen once & modified the formula
                printf("Area : %.3f \n",area);
                break;
         case 7:printf("Enter Side : ");
                scanf("%f",&x);
                area=((3*sqrt(3))/2)*x*x;// modified the formula
                printf("Area : %.3f \n",area);
                break;
        default: printf("Invalid choice entered\n");
                break;
    }
}
