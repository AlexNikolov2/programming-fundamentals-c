#include <stdio.h>

typedef struct
{
    char id[3];
    char name[20];
    int weight;
    float kilo_price;
} IceCream;

float price_by_letter(IceCream *arr, int *size, char *letter){
    float total_price = 0.00;

    for(int i = 0; i < size; i++){
        if(arr[i].id[0] == letter){
            total_price += (arr[i].kilo_price * arr[i].weight);
        }
    }

    return total_price;
}

void write_txt_file(IceCream *arr, int size, float kilo_price, int weight){
    char text_file_name[] = "info.txt";
    FILE *text_file = fopen(text_file_name, "w");

    if (text_file == NULL) {
        printf("Failed to open file.\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        if (arr[i].kilo_price < kilo_price && arr[i].weight > weight) {
            fprintf(text_file, "%s;%s;%d;%.2f leva\n", arr[i].id, arr[i].name, arr[i].weight, arr[i].kilo_price);
        }
        else{
            fprintf(text_file, "0");
        }
    }

    fclose(text_file);
    
}

void read_bin_file(char *id){
    FILE *bin_file = fopen("icecream.bin", "rb");

    if(bin_file == NULL){
        printf("Failed to open file");
        return 1;
    }
    IceCream icecream;

    while(fread(&icecream, sizeof(IceCream), 1, bin_file) == 1){
        if(strcmp(icecream.id, id) == 0){
            printf("Ice Cream ID: %s\n", icecream.id);
            printf("Name: %s\n", icecream.name);
            printf("Weight: %d\n", icecream.weight);
            printf("Price per kilo: %.2f\n", icecream.kilo_price);
            break; // Exit loop once matching record is found
        }
    }

    fclose(bin_file);

    //read the information from the bin file that alrwady exists and print the information about the icecream with the respective id

}

int main(){
    int size;
    printf("Set size: \n");
    scanf("%d",&size);

    if(size < 2 || size > 15){
        printf("Invalid size!\n");
        return 1;
    }

    IceCream *icecreams_arr = (IceCream *)malloc(size * sizeof(IceCream));

    if(icecreams_arr == NULL){
        printf("Failed to allocate.");
        return 1;
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

    char letter;
    printf("Set letter: \n");
    scanf(" %c", &letter);

    int kilo_price_param;
    printf("Set price per kilo: \n");
    scanf("%d", &kilo_price_param);

    int weight_param;
    printf("Set weight: \n");
    scanf("%d", &weight_param);

    char id_param[3];
    printf("Set ID to find: \n");
    scanf("%2s",&id_param);


    /*printf("\nIce Cream details:\n");
    for (int i = 0; i < size; i++) {
        printf("\nIce Cream #%d\n", i+1);
        printf("ID: %s\n", icecreams_arr[i].id);
        printf("Name: %s\n", icecreams_arr[i].name);
        printf("Weight: %d\n", icecreams_arr[i].weight);
        printf("Price per kilo: %.2f\n", icecreams_arr[i].kilo_price);
    }*/

    float total_price = price_by_letter(icecreams_arr, size, letter);

    printf("Total price by letter %c: %.2f", letter, total_price);

    write_txt_file(icecreams_arr, size, kilo_price_param, weight_param);
    read_bin_file(id_param);

    free(icecreams_arr);


}
