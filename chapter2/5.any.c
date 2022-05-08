#include <stdio.h>

int any(char s1[], char s2[])
{
    int i, j, c;
    for (i = 0; s1[i] != '\0'; i++){
        for (j=0; s2[j] != '\0'; j++){
            c = s2[j];
            if (s1[i] == c) {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    char s1[] = "01234567890123456789ccdef";
    char s2[] = "bcd";
    int i;

    i = any(s1, s2);
    printf("Position: %d\n", i);

}