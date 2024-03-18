#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float calcArea(float w, float h){
    float area;
    area = ((w * h) - 1 * h);
    printf("Area: %f \n", area);
    return area;
}
int calcWorkSpaces(float area, float w, float h){
    float workspaceW = 1.2;
    float workspaceH = 0.7;
    float workspaceArea = workspaceH * workspaceW;

    int workspaceCountW = (w - 1) / workspaceW;
    int workspaceCountH = (h) / workspaceH;

    int workspaceCount = (workspaceCountW * workspaceCountH) - 3;

    printf("Workspace count W: %d \n", workspaceCountW);
    printf("Workspace count H: %d \n", workspaceCountH);

    return workspaceCount;
}
int main(){
    float w,h;
    printf("Set w and h: \n");
    scanf("%f %f",&w,&h);

    float area = calcArea(w,h);
    int workspacecount = calcWorkSpaces(area, w, h);

    printf("Workspaces: %d \n", workspacecount);
}