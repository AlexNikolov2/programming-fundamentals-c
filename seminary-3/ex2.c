#include <stdio.h>

#define MAX_PEOPLE 100000
#define MAX_FRIENDSHIPS 1000000

int friendships[MAX_PEOPLE + 1][2]; 
int friendsCount[MAX_PEOPLE + 1]; 

int main() {
    int n, m; 
    printf("Enter the number of people and friendships: ");
    scanf("%d %d", &n, &m);

    printf("Enter friendships (pairs of numbers):\n");
    for (int i = 0; i < m; ++i) {
        scanf("%d %d", &friendships[i][0], &friendships[i][1]);
    }

    for (int i = 1; i <= n; ++i) {
        friendsCount[i] = 0;
    }

    for (int i = 0; i < m; ++i) {
        friendsCount[friendships[i][0]]++;
        friendsCount[friendships[i][1]]++;
    }

    printf("Number of friends for each person:\n");
    for (int i = 1; i <= n; ++i) {
        printf("Person %d has %d friends.\n", i, friendsCount[i]);
    }

    return 0;
}