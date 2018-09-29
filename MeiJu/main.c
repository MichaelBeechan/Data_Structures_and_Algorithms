/***************************
*Description:Enumerate algorithm, Fill in the operator
*Date:2018.9.29
*Name:Michael Beechan
*School:Chongqing University of technology
****************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j, i[5];      //Loop para  i[] as 4  operator
    int sign;         //The sign of the summation operation
    int result;       //Save result
    int count = 0;    //counter Statistical eligible programmes
    int num[6];       //Save operate number

    float left, right;//Save intermediate results
    char oper[5] = {' ', '+', '-', '*', '/'};  //Operator

    printf("Please input 5 numbers: ");
    for(j = 1; j <= 5; j ++){
        scanf("%d", &num[j]);
    }
    printf("Please input result: ");
    scanf("%d", &result);

    for(i[1] = 1; i[1] <= 4; i[1]++)  //Loop 4 operator, 1 as +, 2 as -, 3 as *, 4 as /
    {
        if((i[1] < 4) || (num[2] != 0))
        {
            for(i[2] = 1; i[2] <= 4; i[2] ++)
            {
                if((i[2] < 4) || (num[3] != 0))
                {
                    for(i[3] = 1; i[3] <= 4; i[3] ++)
                    {
                        if((i[3] < 4) || num[4] != 0)
                        {
                            for(i[4] = 1; i[4] <= 4; i[4] ++)
                            {
                                if((i[4] < 4) || num[5] != 0)
                                {
                                    left = 0;
                                    right = num[1];
                                    sign = 1;
                                    for(j = 1; j <= 4; j ++)
                                    {
                                        switch(oper[i[j]])
                                        {
                                        case '+':
                                            left = left + sign*right;
                                            sign = 1;
                                            right = num[j + 1];
                                            break;
                                        case '-':
                                            left = left + sign * right;
                                            sign = -1;
                                            right = num[j + 1];
                                            break;
                                        case '*':
                                            right = right * num[j + 1];
                                            break;
                                        case '/':
                                            right = right / num[j+1];
                                            break;
                                        }
                                    }
                                    if(left + sign * right == result)
                                    {
                                        count ++;
                                        printf("%3d: ", count);
                                        for(j = 1; j <= 4; j ++)
                                            printf("%d%c", num[j], oper[i[j]]);
                                        printf("%d = %d\n", num[5], result);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(count == 0)
        printf("No method \n");
    return 0;
}
