/***************************
*Description: factorial number
*Date:2018.9.29
*Name:Michael Beechan
*School:Chongqing University of technology
****************************/
#include <stdio.h>
#include <stdlib.h>

int fact(int n);

int main()
{
    int i;
    printf("Please input factorial number: ");
    scanf("%d", &i);
    printf("The factorial of number %d is %d\n", i, fact(i));
    //printf("Hello world!\n");
    return 0;
}

int fact(int n)
{
    if(n <= 1)
        return 1;
    else
        return n * fact(n-1);
}
