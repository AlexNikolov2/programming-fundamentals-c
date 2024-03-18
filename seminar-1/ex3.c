#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float triangleArea(float x1, float y1, float x2, float y2, float x3, float y3) {
    float area;
    area = 0.5 * fabs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));

    return area;
}

int areNotCollinear(float x1, float y1, float x2, float y2, float x3, float y3) {
    return triangleArea(x1, y1, x2, y2, x3, y3) != 0;
}

int main() {
    float x1, y1, x2, y2, x3, y3;

    printf("Enter the coordinates of the first point: ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the coordinates of the second point: ");
    scanf("%f %f", &x2, &y2);
    printf("Enter the coordinates of the third point: ");
    scanf("%f %f", &x3, &y3);

    if (areNotCollinear(x1, y1, x2, y2, x3, y3)) {
        float area = triangleArea(x1, y1, x2, y2, x3, y3);
        printf("The area of the triangle is: %f \n", area);
    } else {
        printf("The points are collinear, you cant form a fucking triangle.\n");
    }

    return 0;
}