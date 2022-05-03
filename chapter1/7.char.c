#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        printf("1get getchar() != EOF value %d\n", (c != EOF));
        putchar(c);
        printf("%d\n", c);
    }

    printf("2get getchar() != EOF value %d\n", (c != EOF));

    printf("EOF value %d\n", EOF);
}