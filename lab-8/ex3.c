#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BRAND_LENGTH 50
#define MAX_MODEL_LENGTH 5
#define MAX_CARS 100

typedef struct {
    char brand[MAX_BRAND_LENGTH];
    char model[MAX_MODEL_LENGTH];
    float engine_volume;
    float price;
    char is_registered;
} Car;

void add_car(Car *cars, int *num_cars) {
    if (*num_cars >= MAX_CARS) {
        printf("Database is full. Cannot add more cars.\n");
        return;
    }

    Car new_car;
    printf("Enter brand: ");
    scanf("%s", new_car.brand);
    printf("Enter model: ");
    scanf("%s", new_car.model);
    printf("Enter engine volume: ");
    scanf("%f", &new_car.engine_volume);
    printf("Enter price: ");
    scanf("%f", &new_car.price);
    printf("Is registered? (Y for Yes, N for No): ");
    scanf(" %c", &new_car.is_registered);

    cars[*num_cars] = new_car;
    (*num_cars)++;
}

void write_binary_file(const char *filename, Car *cars, int num_cars) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }
    fwrite(cars, sizeof(Car), num_cars, file);
    fclose(file);
}

void write_text_file(const char *filename, Car *cars, int num_cars) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }
    for (int i = 0; i < num_cars; i++) {
        fprintf(file, "Brand: %s, Model: %s, Engine Volume: %.1f, Price: %.2f, Registered: %s\n",
                cars[i].brand, cars[i].model, cars[i].engine_volume, cars[i].price,
                cars[i].is_registered ? "Yes" : "No");
    }
    fclose(file);
}

void read_and_print_files(const char *binary_filename, const char *text_filename) {
    printf("Reading cars from binary file:\n");
    FILE *binary_file = fopen(binary_filename, "rb");
    if (binary_file == NULL) {
        printf("Error opening binary file for reading.\n");
        exit(1);
    }
    Car car;
    while (fread(&car, sizeof(Car), 1, binary_file) == 1) {
        printf("Brand: %s, Model: %s, Engine Volume: %.2f, Price: %.2f, Registered: %s\n",
               car.brand, car.model, car.engine_volume, car.price,
               car.is_registered ? "Yes" : "No");
    }
    fclose(binary_file);

    printf("\nReading cars from text file:\n");
    FILE *text_file = fopen(text_filename, "r");
    if (text_file == NULL) {
        printf("Error opening text file for reading.\n");
        exit(1);
    }
    char line[100];
    while (fgets(line, sizeof(line), text_file) != NULL) {
        printf("%s", line);
    }
    fclose(text_file);
}

int main() {
    const char *binary_filename = "cars.bin";
    const char *text_filename = "cars.txt";
    Car cars[100];
    int num_cars = 0;

    add_car(cars, &num_cars);
    add_car(cars, &num_cars);

    write_binary_file(binary_filename, cars, num_cars);
    write_text_file(text_filename, cars, num_cars);

    read_and_print_files(binary_filename, text_filename);

    return 0;
}