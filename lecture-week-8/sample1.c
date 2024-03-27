#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//code doesn't really have to work :)
int main(){
    char** names;

    names = malloc(2 * sizeof(char*));

    *(names + 0) = malloc(20 * sizeof(char));
    *(names + 1) = malloc(20 * sizeof(char));

    strcpy(names[0], "Ivan");
    strcpy(names[1], "Dragan Draganovich Draganovski");

    printf("%s\n", names[0]);
    printf(names[1]);
}