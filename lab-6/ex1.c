#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_flight_in_array(int *flights, int size, int flight) {
    for (int i = 0; i < size; i++) {
        if (flights[i] == flight) {
            return true; 
        }
    }
    return false;
}


void add_flights(int **flights, int *size) {
    int additionalSize;
    printf("Set number of flights to add: ");
    scanf("%d", &additionalSize);

    int newSize = *size + additionalSize;
    int *temp = (int *)realloc(*flights, newSize * sizeof(int));
    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    *flights = temp;

    for (int i = *size; i < newSize; i++) {
        int flight;
        printf("Set flight number: ");
        scanf("%d", &flight);
        if (is_flight_in_array(*flights, *size, flight)) {
            printf("Flight already added!\n");
            i--;
        } else {
            (*flights)[i] = flight;
        }
    }

    *size = newSize;
}

void del_flights(int *flights, int *size) {
    int removeIndex;
    printf("Enter the index of the element to remove: ");
    scanf("%d", &removeIndex);

    if (removeIndex < 0 || removeIndex >= *size) {
        printf("Invalid index.\n");
        return;
    }

    for (int i = removeIndex; i < *size - 1; i++) {
        flights[i] = flights[i + 1];
    }

    (*size)--;
}

void active_flights(int *flights, int size) {
    printf("Active flights: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", flights[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Set initial size of flights: ");
    scanf("%d", &size);

    int *flights = (int *)malloc(size * sizeof(int));
    if (flights == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        int flight;
        printf("Set flight num: ");
        scanf("%d", &flight);
        flights[i] = flight;
    }

    int choice = 1;

    while (choice != 0) {
        printf("SET CHOICE (1- Add, 2- Remove, 3- Active, 0- Exit): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_flights(&flights, &size);
                break;
            case 2:
                del_flights(flights, &size);
                break;
            case 3:
                active_flights(flights, size);
                break;
            case 0:
                printf("End of program!");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    }

    free(flights);

    return 0;
}