/***************************
*Description: heuristic algorithm :Generate a lottery number combination
*Date:2018.10.1
*Name:Michael Beechan
*School:Chongqing University of technology
****************************/
//假设有一种彩票，每注由7个1~29的数字组成，且这7个数字不能相同，编写程序生成所有的号码组合
#include <stdio.h>
#include <stdlib.h>

#define MAXN 7   //lottery number
#define NUM 29   //lottery value range

int num[NUM];
int lottery[MAXN];
//n = NUM  m = MAXN
void group(int n, int m)
{
    int i, j;
    for(i = n; i >= m; i --)
    {
        lottery[m-1] = num[i-1];
        if(m > 1)
            group(i - 1, m - 1);
        else{
            for(j = MAXN - 1; j >= 0; j --)
                printf("%3d", lottery[j]);
            printf("\n");
        }
    }
}

int main()
{
//The original method
//    int i[7], j;
//    for(i[0] = 1; i[0] <= 29; i[0] ++)
//    {
//        for(i[1] = 1; i[1] <= 29; i[1] ++)
//        {
//            if(i[0] == i[1]) continue;
//            for(i[2] = 1; i[2] <= 29; i[2] ++)
//            {
//                if(i[0] == i[2] || i[1] == i[2])  continue;
//                for(i[3] = 1; i[3] <= 29; i[3] ++)
//                {
//                    if(i[0] == i[3] || i[1] == i[3] || i[2] == i[3]) continue;
//                    for(i[4] = 1; i[4] <= 29; i[4] ++)
//                    {
//                        if(i[0] == i[4] || i[1] == i[4] || i[2] == i[4] || i[3] == i[4]) continue;
//                        for(i[5] = 1; i[5] <= 29; i[5] ++)
//                        {
//                            if(i[0] == i[5] || i[1] == i[5] || i[2] == i[5] || i[3] == i[5] || i[4] == i[5]) continue;
//                            for(i[6] = 1; i[6] <= 29; i[6] ++)
//                            {
//                                if(i[0] == i[6] || i[1] == i[6] || i[2] == i[6] || i[3] == i[6] || i[4] == i[6] ||
//                                   i[5] == i[6]) continue;
//                                for(j = 0; j < 7; j ++)
//                                    printf("%3d", i[j]);
//                                printf("\n");
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//The improved method
    int i;
    for(i = 0; i < NUM; i ++)
        num[i] = i + 1;
    for(i = 0; i < MAXN; i ++)
        lottery[i] = 0;
    group(NUM, MAXN);
    //printf("Hello world!\n");
    return 0;
}
