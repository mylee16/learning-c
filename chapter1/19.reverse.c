#include <stdio.h>

# define MAXLINE 1000

int getline1(char s[], int maxline) {
    int c, i;
    for (i=0; i<maxline-1 && (c=getchar()) != EOF && c!='\n'; i++) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

void reverse(char s[]){
    int len, i, left;
    char temp;
    len = 0;

    while (s[len] != '\n')
        len++;

    int middle;
    if ((len % 2) == 0)
        middle = len / 2;
    else
        middle = len / 2 + 1;

    for (i = len - 1; i >= middle; --i) {
        left = len - 1 - i;
        temp = s[left];
        s[left] = s[i];
        s[i] = temp;
    }
}

int main(){
    char line[MAXLINE];

    while(getline1(line, MAXLINE) > 0) {
        reverse(line);
        printf("%s", line);
    }
    return 0;
}
