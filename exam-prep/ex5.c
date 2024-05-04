#include <stdio.h>

void add(int *a, int *b) {

    int sum = *a + *b; 
    //a in address of a
    //b is address of b

    //*a and *b are VALUES of a and b and point to variables a and b
    printf("Sum: %d\n", sum);

}

void subtract(int *a, int *b) {
    int difference = *a - *b;
    printf("Difference: %d\n", difference);
}

void multiply(int *a, int *b){
    int product = *a * *b;
    printf("Product: %d\n", product);
}

int main(){
    int a,b;

    printf("Set a: \n");
    scanf("%d",&a);
    printf("Set b: \n");
    scanf("%d",&b);

    int *ptra = &a; 
    int *ptrb = &b;

    add(ptra, ptrb);

}