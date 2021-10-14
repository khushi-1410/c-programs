// Suppose you are given the coordinates of the three vertices of an equilateral
// triangle on the Cartesian plane. Calculate the coordinates of the centre
// and the area of the circle inscribed in the triangle. Assume the value of "pi" to be 3.14.
// input: coordinates of the vertices of the triangle
// output: Coordinates of incentre:
// Area of the incircle:

#include <stdio.h>
#include <math.h>
#define pi 3.14

int main() {
    float x1, y1, x2, y2, x3, y3;
    float a, b, c;
    float m, n, rad, area;
    
    // input from user
    printf("enter coordinates of A : ");
    scanf("%f %f", &x1, &y1);
    printf("enter coordinates of B : ");
    scanf("%f %f", &x2, &y2);
    printf("enter coordinates of C : ");
    scanf("%f %f", &x3, &y3);
    
    // calculate length of sides
    a = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    b = sqrt(pow(x3-x2, 2) + pow(y3-y2, 2));
    c = sqrt(pow(x3-x1, 2) + pow(y3-y1, 2));

    // coordinates of incenter
    m = ((a * x1) + (b * x2) + (c * x3)) / (a + b + c);
    n = ((a * y1) + (b * y2) + (c * y3)) / (a + b + c);
    
    // calculate radius of the circle
    rad = sqrt(pow(m-x1, 2) + pow(n-y1, 2));

    // area of triangle
    area = 2 * pi * pow(rad, 2);

    // output results
    printf("coordinates of incenter : (%f, %f)\n", m, n);
    printf("area of circle : %f\n", area);
    
    return 0;
}
