/***************************
*Description: Numerical transformation
*Date:2018.9.29
*Name:Michael Beechan
*School:Chongqing University of technology
****************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void transNum(char* s, int num, int sys) //sys ½øÖÆ
{
    char bit[] = {"0123456789ABCDEF"};
    int len;
    if(num == 0)   //Transform end
    {
        strcpy(s, "");
        return;
    }
    transNum(s, num / sys, sys);        //Recursive transformation
    len = strlen(s);
    s[len] = bit[num % sys];
    s[len + 1] = '\0';
}
int main()
{
    char s[80];
    int base, old;
    printf("Please input number: ");
    scanf("%d", &old);
    printf("Please input number transform to (n system):");
    scanf("%d", &base);

    transNum(s, old, base);
    printf("%s\n", s);
    //printf("Hello world!\n");
    return 0;
}
