#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
    int rows, cols;
    printf("Set rows: \n");
    scanf("%d", &rows);
    printf("Set cols: \n");
    scanf("%d", &cols);

    if (rows > MAX_ROWS || cols > MAX_COLS) {
        printf("Exceeded maximum allowed dimensions.");
        return 1;
    }

    int arr[MAX_ROWS][MAX_COLS];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int cell_value;
            printf("Set value for row %d, column %d: \n", i, j);
            scanf("%d", &cell_value);
            arr[i][j] = cell_value;
        }
    }

    printf("Array contents:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}