#include <stdio.h>

typedef struct
{
    char id[3];
    char name[20];
    int weight;
    float kilo_price;
} IceCream;

int main(){
    int size;
    printf("Set size: \n");
    scanf("%d",&size);

    if(size < 5 || size > 15){
        printf("Invalid size!\n");
        return 1;
    }

    IceCream *icecreams_arr = (IceCream *)malloc(size * sizeof(IceCream));

    if(icecreams_arr == NULL){
        printf("Failed to allocate.");
    }

    for(int i = 0; i < size; i++){
        printf("Setting data for %d:\n", i+1);
        printf("Set id: \n");
        scanf("%s",&icecreams_arr[i].id);
        printf("Set name: \n");
        scanf("%s",&icecreams_arr[i].name);
        printf("Set weight: \n");
        scanf("%d",&icecreams_arr[i].weight);
        printf("Set price per kilo: \n");
        scanf("%f", &icecreams_arr[i].kilo_price);

    }

    printf("\nIce Cream details:\n");
    for (int i = 0; i < size; i++) {
        printf("\nIce Cream #%d\n", i+1);
        printf("ID: %s\n", icecreams_arr[i].id);
        printf("Name: %s\n", icecreams_arr[i].name);
        printf("Weight: %d\n", icecreams_arr[i].weight);
        printf("Price per kilo: %.2f\n", icecreams_arr[i].kilo_price);
    }

    free(icecreams_arr);


}
