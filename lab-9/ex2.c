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

    free(history);
}

