#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//code doesn't really have to work :)
struct Car{
    int year;
    char model;
} *p;

int main(){
    struct Car car1;

    //struct Car *p;
    //p = &car1;

    (struct Car) *p;
    p = malloc(sizeof(struct Car));
    p -> year = 2024;

    char** names;

    names = (char*) malloc(2 * sizeof(char*));

    for(int i = 0; i < 2; i++){
        printf("Set %d name: ", i + 1);
        fgets(*(names + i), 20 * sizeof(char), stdin);
    }

    printf("%s\n", names[0]);
    printf(names[1]);
}