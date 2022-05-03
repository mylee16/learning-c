#include <stdio.h>

int main(){
    int c, prev_c;

    printf("enter ctrl-D when done\n");
    while ((c = getchar()) != EOF){
        if (c == ' ' & prev_c == ' ') {
            ; // skip
        }
        else {
            putchar(c);
        }
        prev_c = c;
    }
}