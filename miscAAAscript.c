#include <stdio.h>

int main(void) {
    int screamLength;

    printf("Please enter the number of A's you want in your scream: ");
    scanf("%d", &screamLength);

    for(int i = 0; i < screamLength; i++) {
        printf("A");
    }

    printf("\n");
}