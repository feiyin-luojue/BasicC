//BUG:
//rand()函数无法正常产生随机数！


#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{

#if 0
    int randomVal1 = rand();    /* 随机数 */
    printf("randomVal:%d\n",randomVal1);
    int lotteryRate = randomVal1 % 4;   //产生0，1，2，3 四个随机数
    printf("lotteryRate:%d\n",lotteryRate);
#endif
    int i = 0;
    for(;i<=5;i++)
    {
        printf(" %d\n",rand());
    }
    // int num = rand()%11+1;
    // printf("num = %d\n",num);
     return 0;
}
