#include <stdio.h>

void squeeze(char s1[], char s2[])
{
    int i, j, k, c;

    for (k=0; s2[k] != '\0'; k++){
        c = s2[k];

        for (i = j = 0; s1[i] != '\0'; i++)
        {
            if (s1[i] != c) {
                s1[j++] = s1[i];
            }
        }
        s1[j] = '\0';
    }
}

int main()
{
    char s1[] = "abcdef";
    char s2[] = "bcd";

    squeeze(s1, s2);

    printf("%s\n", s1);
}