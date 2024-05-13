#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int id;
    char data[11];
    char name[30];
    char diagnosis[50];
}Treatment;

int count_treatment(Treatment *arr, int size, char *name_param, char *diagnosis_param){
    int treatments_count = 0;

    for(int i=0; i<size; i++){
        if(strcmp(arr[i].name, name_param) == 0 && strcmp(arr[i].diagnosis, diagnosis_param) == 0){
            treatments_count++;
        }
    }
    if(treatments_count > 0){
        return treatments_count;
    }
    else{
        return 0;
    }
}

Treatment* add_new_treatment(Treatment *arr, int *size) {
    (*size)++;
    arr = (Treatment*)realloc(arr, (*size) * sizeof(Treatment));

    if (arr == NULL) {
        printf("Memory reallocation failed");
        return NULL;
    }

    printf("Enter Id: \n");
    scanf("%d", &arr[*size - 1].id);

    printf("Enter data: \n");
    scanf("%s", arr[*size - 1].data);

    printf("Enter name: \n");
    scanf("%s", arr[*size - 1].name);

    printf("Enter diagnosis: \n");
    scanf("%s", arr[*size - 1].diagnosis);

    return arr;
}

void write_text_file(Treatment *arr, int size, char *diagnosis){
    FILE *text_file = fopen("illness.txt", "w");

    if(text_file == NULL){
        printf("Error opening file.");
        exit(1);
    }

    for(int i = 0; i < size; i++){
        if(strcmp(arr[i].diagnosis, diagnosis) == 0){
            fprintf(text_file, "Stay of %s for %s: %s", arr[i].name, arr[i].diagnosis, arr[i].data);
        }
    }
}

int main(){
    int size;
    printf("Set array size: \n");
    scanf("%d",&size);

    Treatment *history = (Treatment*) malloc(size * sizeof(Treatment));

    if(history == NULL){
        printf("Memory allocation failed");
        return 1;
    }

    for(int i = 0; i < size; i++) {
        printf("Enter Id: \n");
        scanf("%d", &history[i].id);

        printf("Enter data: \n");
        scanf("%s", history[i].data);

        printf("Enter name: \n");
        scanf("%s", history[i].name);

        printf("Enter diagnosis: \n");
        scanf("%s", history[i].diagnosis);
    }

    char name_param[50];
    printf("Set name: \n");
    scanf("%s", name_param);

    char diagnosis_param[50];
    printf("Set diagnosis: \n");
    scanf("%s", diagnosis_param);

    int treatments = count_treatment(history, size, name_param, diagnosis_param);
    printf("Treatments of %s with diagnosis %s: %d", name_param, diagnosis_param, treatments);

    history = add_new_treatment(history, &size);

    if (history != NULL) {
        free(history);
    }

}

