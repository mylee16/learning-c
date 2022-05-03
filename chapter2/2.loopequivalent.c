#include <stdio.h>

# define MAXLINE 1000

int main(){
    int i, lim;
    char c;
    char s[MAXLINE];

    lim = 10;

//    for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) {
//        s[i] = c;
//    };

    i = 0;
    while ((c=getchar()) != '\n') {
        if (i > lim-1){
            break;}
        else if (c == EOF) {
                break;
            }
        else {
            s[i] = c;
            i++;
        }
    }


    printf("%s", s);

}