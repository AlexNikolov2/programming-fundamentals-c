#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

double distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}
 
int main(){
    int points;
    printf("Set num of points: \n");
    scanf("%d", &points);

    Point *points_array = (Point*)malloc(points * sizeof(Point));

    if(points_array == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    for(int i = 0; i < points; i++){
        printf("Corrdinates of point %d: \n", i);
        printf("Enter point x: \n");
        scanf("%d", &points_array[i].x);
        printf("Enter point y: \n");
        scanf("%d", &points_array[i].y);
    }

    int triangles = 0;

    for (int i = 0; i < points; ++i) {
        for (int j = i + 1; j < points; ++j) {
            for (int k = j + 1; k < points; ++k) {
                double side1 = distance(points_array[i], points_array[j]);
                double side2 = distance(points_array[j], points_array[k]);
                double side3 = distance(points_array[k], points_array[i]);

                
                printf("Triangle: %d, %d, %d\n", i, j, k);
                printf("Side 1: %lf\n", side1);
                printf("Side 2: %lf\n", side2);
                printf("Side 3: %lf\n\n", side3);

                triangles++;

            }
        }
    }

    printf("Triangles total: %d \n", triangles);

    free(points);
}