#include "calculateFunc.h"
#include <stdio.h>
/* 源文件（.c）是函数的实现 */

#if 0
/* 取别名 */
typedef enum STATUS_CODE STATUS_CODE;
#endif

/* 状态码 */
/* 枚举  它也是一种数据类型 */
typedef enum STATUS_CODE
{
    ON_SUCCESS,
    ON_ERROR = -5,
    ON_NULLPTR,
    ON_MALLOCFAIL,
    ON_INVALIDACCESS
} STATUS_CODE;

/* 加法 */
int calculateAdd (int num1, int num2)
{
    int Sum = num1 + num2;
    return Sum;
}

/* 减法 */
int calculateSub(int num1, int num2)
{
    return num1 - num2;
}


/* 乘法 */
int calculateMul(int num1, int num2)
{
    int amass = num1 * num2;
    return amass;
}

/* 除法 */
int calculateDiv(int num1, int num2)
{
    if (num2 == 0)
    {
        return ON_INVALIDACCESS;
    }
    return num1 / num2;
}

// int main(int argc, char const *argv[])
// {
    
//     enum STATUS_CODE status;
//     int len = sizeof(status);
//     return 0;
// }

