#include <stdio.h>
#include <stdlib.h>

int main(){
    for(int i = 1; i < 10; i++){
        char c = i + '0'; // converting the integer to a char turns it into a ASCII character. THerefore we add a 0, in order to preserve the integer.
        printf("%c\n", c);
    }
}