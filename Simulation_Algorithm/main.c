/***************************
*Description: Simulation Algorithm
*Date:2018.10.1
*Name:Michael Beechan
*School:Chongqing University of technology
****************************/
//使用随机函数来模拟自然界中发生的不可预测情况
//srand()   rand()
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
//参数游戏
int main()
{
    int n, m, i = 0;
    srand(time(NULL));
    n = rand() % 100 + 1;
    printf("Friendly reminder: youa can use the method of dichotomy \n");
    //printf("%d", n);
    do{
        printf("Please input guess number: ");
        scanf("%d", &m);
        i ++;
        if(m > n)
        {
            printf("Error: The number is up!\n");
        }else if(m < n)
        {
            printf("Error: The number is low!\n");
        }
    }while(m != n);
    printf("Congratuation Right!!!\n");
    printf("The Total guess %d times \n", i);
    if(i <= 5)
        printf("You are very smart!!!");
    else if(i > 5)
    {
        printf("You need to speed up your mind!!!");
    }
    //printf("Hello world!\n");
    return 0;
}
