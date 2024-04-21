#include <string.h>
#include <stdio.h>
#include <math.h>

struct Point{
    double x;
    double y;
};

double distance(struct Point p1, struct Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main(){
struct Point points[3];
    
    printf("Enter coordinates for the first point (x y): ");
    scanf("%lf %lf", &points[0].x, &points[0].y);
    printf("Enter coordinates for the second point (x y): ");
    scanf("%lf %lf", &points[1].x, &points[1].y);
    printf("Enter coordinates for the third point (x y): ");
    scanf("%lf %lf", &points[2].x, &points[2].y);
    
    double side1 = distance(points[0], points[1]);
    double side2 = distance(points[1], points[2]);
    double side3 = distance(points[2], points[0]);
    
    printf("Sides of the triangle:\n");
    printf("Side 1: %.2f\n", side1);
    printf("Side 2: %.2f\n", side2);
    printf("Side 3: %.2f\n", side3);
}