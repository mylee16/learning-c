#include <stdio.h>

int main(){
    int c;
    int wordNum = 0;
    int count = 0;

    while ((c=getchar()) != EOF){
        if ((c == ' ') || (c == '\n')) {
            printf("[%2d]", wordNum);
            for (int n=0; n<count; n++){
                printf("*");
            }
            printf("\n");
            count = 0;
            wordNum ++;
        }
        else {
            count ++;
        }
    }
}