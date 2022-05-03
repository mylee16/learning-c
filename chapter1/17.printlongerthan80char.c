#include <stdio.h>

#define MAXLINE 1000
#define MINLINELENGTH 5

int getlineone(char s[], int lim);
int copy(char to[], char from[], int i);

int main(){
    int len;
    char line[MAXLINE];
    int max = 0;

    while ((len = getlineone(line, MAXLINE)) > 0){
        if (len >= MINLINELENGTH)  {
            printf("%s", line);
        }
    }
}

int getlineone(char s[], int lim) {
    int c, i;

    for (i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; i++) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        i++;
    }

    s[i] = '\0';
    return i;
}
