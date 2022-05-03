#include <stdio.h>

int main(){
    int c;
    int newline = 0, blank = 0, tabs = 0;

    printf("enter ctrl-D when done\n");
    while ((c = getchar()) != EOF){
        if (c == '\n') {
            newline++;
        }
        if (c == ' ') {
            blank++;
        }
        if (c == '\t') {
            tabs++;
        }
    }
    printf("new line %d blank %d tabs %d\n", newline, blank, tabs);
}