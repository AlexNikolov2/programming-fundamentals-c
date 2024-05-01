#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);
    char reversed[100];
    int j = 0;
    for (int i = length - 1; i >= 0; i--) {
        reversed[j++] = str[i];
    }
    reversed[j] = '\0';

    reversed[strcspn(reversed, "\n")] = '\0';

    if (strcmp(str, reversed) == 0) {
        printf("equal\n");
    }

    return 0;
}