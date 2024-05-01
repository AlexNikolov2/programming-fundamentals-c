#include <stdio.h>
#include <stdlib.h>

void create_binary_file(char *filename, int *arr, int size){
    FILE *f = fopen(filename, "wb");
    if(f == NULL){
        printf("Error opening file for writing.\n");
        exit(1);
    }
    fwrite(&size, sizeof(int), 1, f);
    fwrite(arr, sizeof(int), size, f); //
    fclose(f);
}

void count_odd_even(int *arr, int size, int *odd_count, int *even_count) {
    *odd_count = 0;
    *even_count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            (*even_count)++;
        } else {
            (*odd_count)++;
        }
    }
}

int sort_integers(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void create_sorted_text_file(const char *input_filename, const char *output_filename){
    FILE *input_file = fopen(input_filename, "rb");
    if (input_file == NULL) {
        printf("Error opening input file for reading.\n");
        exit(1);
    }

    int size;
    fread(&size, sizeof(int), 1, input_file);

    int *arr = malloc(size * sizeof(int));
    fread(arr, sizeof(int), size, input_file);

    fclose(input_file);

    qsort(arr, size, sizeof(int), sort_integers);

    FILE *output_file = fopen(output_filename, "w");
    if (output_file == NULL) {
        printf("Error opening output file for writing.\n");
        exit(1);
    }

    for (int i = 0; i < size; i++) {
        fprintf(output_file, "%d\n", arr[i]);
    }

    fclose(output_file);

    free(arr);
}

int main(){
    int size;
    printf("Set size: \n");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        int value;
        printf("Set value: \n");
        scanf("%d",&value);
        arr[i] = value;
    }
    const char *binary_filename = "numbers.bin";
    const char *text_filename = "sorted_numbers.txt";

    create_binary_file(binary_filename, arr, size);

    int odd_count, even_count;
    count_odd_even(arr, size, &odd_count, &even_count);

    create_sorted_text_file(binary_filename, text_filename);

    printf("Count of odd numbers: %d\n", odd_count);
    printf("Count of even numbers: %d\n", even_count);
    printf("Sorted numbers written to: %s\n", text_filename);

    
}