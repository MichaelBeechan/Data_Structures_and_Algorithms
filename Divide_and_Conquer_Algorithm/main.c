/***************************
*Description: divide-and-conquer algorithm: Table tennis schedule
*Date:2018.9.29
*Name:Michael Beechan
*School:Chongqing University of technology
****************************/
#include <stdio.h>
#include <stdlib.h>
#define MAXN 64

int a[MAXN + 1][MAXN + 1] = {0};

void tableSch(int num, int player)
{
    int i, j;
    if(player == 2)
    {
        a[num][1] = num;
        a[num][2] = num + 1;
        a[num+1][1] = num + 1;
        a[num+1][2] = num;
    }else{
        //Divide and conquer
        tableSch(num, player/2);
        tableSch(num+player/2, player/2);
        for(i = num; i < num+player/2; i ++)
        {
            for(j = player/2+1; j <= player; j ++)
            {
                a[i][j] = a[i+player/2][j-player/2];
            }
        }
        for(i = num + player/2; i < num+player; i++)
        {
            for(j = player/2+1; j <= player; j ++)
            {
                a[i][j] = a[i-player/2][j-player/2];
            }
        }
    }
}
int main()
{
    int num, i, j = 2;
    printf("Please input number of people: ");
    scanf("%d", &num);
    for(i = 2; i < 8; i ++)
    {
        j = j * 2;
        if(j == num) break;
    }
    if(i >= 8)
    {
        printf("The number of participants must be a power of two and not more than 64!\n");
        return 0;
    }
    tableSch(1, num);
    printf("\nSerNum");
    for(i = 2; i <= num; i ++)
        printf("%2d day\t", i - 1);
    printf("\n");
    for(i = 1; i <= num; i ++)
    {
        for(j = 1; j <= num; j ++)
            printf("%4d\t", a[i][j]);
        printf("\n");
    }
    //printf("Hello world!\n");
    return 0;
}
