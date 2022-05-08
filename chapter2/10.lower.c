#include <stdio.h>

void lower(char s[]){
    int i;
    for (i=0; s[i] != '\0'; i++){
        s[i] = (s[i] >= 'A' & s[i] <= 'Z') ? (s[i] - 'A' + 'a') : s[i] ;
    }
}


int main(){
    char s[20];
    printf("Enter a String\n");
    scanf("%s20", s);
    lower(s);
    printf("%s\n", s);
}