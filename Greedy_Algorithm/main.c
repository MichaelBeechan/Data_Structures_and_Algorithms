/***************************
*Description: Greegy algorithm: Change Money 100 50 10 5 2 1 0.5 0.2 0.1 （yuan元）
*Date:2018.10.1
*Name:Michael Beechan
*School:Chongqing University of technology
****************************/
#include <stdio.h>
#include <stdlib.h>

#define MAXN 9
int parvalue[MAXN] = {10000, 5000, 1000, 500, 200, 100, 50, 20, 10};   //分Partition
int num[MAXN] = {0};
//Change Money
int exchangeMoney(int n)
{
    int i;
    for(i = 0; i < MAXN; i ++)        //判断输入面额最接近的最大面值档
    {
        if(n > parvalue[i]) break;
    }
    while(n > 0 && i < MAXN)          //换钱开始
    {
        if(n >= parvalue[i])
        {
            n -= parvalue[i];
            num[i] ++;
        }else if(n < 10 && n >= 5)
        {
            num[MAXN-1] ++;
            break;
        }else i++;
    }
    return 0;
}

int main()
{
    int i;
    float m;      //Money
    printf("Please input the amount of change money: ");
    scanf("%f", &m);

    exchangeMoney((int)100*m);

    printf("\n%.2f元零钱的组成：\n", m);
    for(i = 0; i < MAXN; i ++)
    {
        if(num[i] > 0)
            printf("%6.2f: %d张\n", (float)parvalue[i]/100.0, num[i]);
    }

    //printf("Hello world!\n");
    return 0;
}
