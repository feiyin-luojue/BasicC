#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 状态码 */
enum STATUS_CODE
{
    REGISTER = 1,
    LOGIN,
    QUIT
};

/* 宏定义 */
/* 代码规范：宏必须全部大写 */
#define COUNT_NUM 10
#define RANGE_NUM 200


int main(int argc, char const *argv[])
{
#if 0
    int budget = 5000;

    int applephone = 8999, mi14Pro = 4399, huaweiP60 = 6000;

    if (budget > applephone)
    {
        printf("get a applephone!\n");
    }
    else if (budget > mi14Pro)
    {
        printf("get a mi14Pro!\n");
    }
    else
    {
        printf("huaweiP60!\n");
    }

#endif

#if 0
    int budget = 5000;
    int minbudget = 4000;
    int maxbudget = 8000;
    int applephone = 8999;
    int mi14Pro = 4399;
    int huaweiP60 = 6000; 

    /* 只要有一个条件被满足，那么就为1 */
    if ((budget < applephone) || (budget > mi14Pro))
    {
        printf("I am happy, get a phone\n");
    }
    else
    {
        printf("I am sad, no phone\n");
    }

    if ((minbudget < budget) && (budget < maxbudget))
    {
        printf("success get a phone\n");
    }
    else
    {
        printf("error get a phone\n");
    }


#endif

/* 代码规范1：一个函数尽量不要超过80行 最多不要超过120行 */

#if 0
    /* 坑1：每一个case都需要有break */
    int choice = 0;
    printf("请输入你的选项：\n");
    scanf("%d", &choice);
    /* switch */
    switch (choice)
    {
    case 1:
    {
        /* 坑2：如果case里面的语句过多，一定需要加上{}来包含 */
        printf("welcome to register\n");
    }
        break;
    case 2:
        printf("welcome to login\n");
        break;
    case 3:
        printf("welcome to QUIT\n");
        break;
    default:
        printf("input choice invalid\n");
        break;
    }

#endif

#if 1
srand(time(NULL));

    /* 循环 */
    /* for 循环 */

    /* 代码规范：循环不允许使用i */
    /* 代码规范：不允许使用魔鬼数字 */
    int randomNum = 0;
    for (int idx = 0; idx< COUNT_NUM; idx++)
    {
        randomNum = rand()%RANGE_NUM + 1;
        printf("randomNum:%d\n",randomNum);
    }

#endif

#if 0

    /* 编码规范：变量尽量使用驼峰式命令 */
    int circuleTimes = COUNT_NUM >> 1;
    int randomNom = 0;

    /* 一定需要有退出的条件 */
    while (--circuleTimes)
    {
        randomNom = rand() % RANGE_NUM + 1;
        printf("randomNum:%d\n", randomNom);
    }
    
#endif

#if 1
/* 用处：长使用在宏函数中 */
int varaNum = 0;
    do
    {
        printf("varaNum:%d\n", varaNum);
    } while (varaNum);
    
#endif

    return 0;
}
