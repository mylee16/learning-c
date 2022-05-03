#include <stdio.h>

int main(){
    int c;
    int nchar[26]; //26 characters, ignoring digits

    for (int i=0; i< 26; i++){
        nchar[i] = 0;
    }

    while ((c = getchar()) != EOF){
        if ((c >= 'a') && (c <= 'z')) {
            nchar[c-'a'] ++;
        }

        else if ((c >= 'A') && (c <= 'Z')) {
            nchar[c-'A'] ++ ;
        }
    }

    for (int i=0; i<26; i++){
        printf("Character %c, count %d \n", i+'a', nchar[i]);
    }
}