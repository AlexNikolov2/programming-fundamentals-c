#include <stdio.h>
#include <stdlib.h>

int main(){
    char symbol;
    int size;
    int spaces, i, j;
    
    printf("Set symbol: \n");
    scanf("%c", &symbol);

    printf("Set size: \n");
    scanf("%d", &size);


    for(i = 0; i <= size; i++){
        spaces = size - i;

        int form = 2 * i - 1;

         for (j = 0; j < spaces; j++) {
            printf(" ");
        }

        for (j = 0; j < form; j++) {
            if (j == 0 || j == form - 1 || i == size) {
                printf("%c", symbol);
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }
}