#include <stdio.h>

#define MAXLINE 1000

int getLine1(char s[]){
    int c, i;
    int prev_c;

    for (i=0; ((c=getchar()) != EOF) && c!='\n'; ) {
        if (c==' ' && c == prev_c) {
            ;
        }
        else {
            s[i] = c;
            i++;
        }
        prev_c = c;
    }

    if (c == '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';

    return i;
}

int main() {
    int len;
    char line[MAXLINE];

    while ((len = getLine1(line)) > 0) {
        printf("%s", line);
    }
}

