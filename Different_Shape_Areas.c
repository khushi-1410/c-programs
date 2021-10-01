// Area of Different Shapes
#include <stdio.h>
 
void main()
{
    int num;
    float s,b,l,h,b1,b2,d1,d2,r,a;
 
    printf("Number for shapes : \n");
    printf(" 1 - Circle\n 2 - Rectangle\n 3 - Triangle\n 4 - Square\n 5 - Rhombus\n\n");
    printf(" 6 - Trapezium\n 7 - Pentagon\n 8 - Hexagon\n 9 - Heptagon\n 10 - Octagon\n\n");
    printf("Enter the number : \n");
    scanf("%d", &num);
    switch(num)
    {
    case 1:
        printf("Enter radius : ");
        scanf("%f", &r);
        a = 3.142 * r * r;
        printf("Area of Circle = %f\n", a);
        break;
    case 2:
        printf("Enter breadth and length : ");
        scanf("%f %f", &b, &l);
        a = b * l;
        printf("Area of Reactangle = %f\n", a);
        break;
    case 3:
        printf("Enter base and height : ");
        scanf("%f %f", &b, &h);
        a = 0.5 * b * h;
        printf("Area of Triangle = %f\n", a);
        break;
    case 4:
        printf("Enter side : ");
        scanf("%f", &s);
        a = s * s;
        printf("Area of Square = %f\n", a);
        break;
    case 5:
        printf("Enter both diagonals : ");
        scanf("%f %f", &d1, &d2);
        a = 0.5 * d1 * d2;
        printf("Area of Rhombus = %f\n", a);
    case 6:
        printf("Enter both bases and height : ");
        scanf("%f%f%f", &b1, &b2, &h);
        a = 0.5 * (b1 + b2) * h ;
        printf("Area of Trapezium = %f\n", a);
    case 7:
        printf("Enter side : ");
        scanf("%f", &s);
        a = (sqrt(5 * (5 + 2 * (sqrt(5)))) * s * s) / 4;
        printf("Area of Pentagon = %f\n", a);
    case 8:
        printf("Enter side : ");
        scanf("%f", &s);
        a = (3 * sqrt(3) * (s * s)) / 2;
        printf("Area of Hexagon = %f\n", a);
    case 9:
        printf("Enter side : ");
        scanf("%f", &s);
        a = 3.634 * pow(a,2);
        printf("Area of Heptagon = %f\n", a);
    case 10:
        printf("Enter side : ");
        scanf("%f", &s);
        a = 2 * (1 + sqrt(2)) * s* s;
        printf("Area of Octagon = %f\n", a);
    default:
        printf("Number not found\n");
        break;
    }
}