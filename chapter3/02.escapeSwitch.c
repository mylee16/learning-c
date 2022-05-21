#include <stdio.h>
#include <string.h>

#define MAX_CHAR 1000

void escape(char s[], char t[]){
    int len = strlen(t);
    for (int i = 0; i < len; i++) {
        switch (t[i]){
            case '\n': case '\t':
                s[i] = '-';
                break;
            default:
                s[i] = t[i];
        }
    }
    }

int main(){
    char s[MAX_CHAR];
    char t[MAX_CHAR] = "hello world\n \t hello";


    escape(s, t);
    printf("%s\n", s);





}