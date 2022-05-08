#include<stdio.h>
#include<math.h>

// copied from https://www.educba.com/hexadecimal-in-c/

int main()
{
    int decnum=0, rem, i=0, len=0;
    char hexdecnum[20];
    printf("Enter any Hexadecimal Number to convert it to decimal number: ");
    scanf("%s", hexdecnum);
    while(hexdecnum[i]!='\0')
    {
        len++;
        i++;
    }
    len--;
    i=0;
    while(len>=0)
    {
        rem = hexdecnum[len];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=90)
            rem = rem-55;
        else
        {
            printf("\n Invalid Hexadecimal digit");
            return 0;
        }
        decnum = decnum + (rem*pow(16, i));
        len--;
        i++;
    }
    printf("\nDecimal Value of entered Hexadecimal number = %d", decnum);
    return 0;
}