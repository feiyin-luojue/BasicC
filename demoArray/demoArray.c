#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 10

/*  数组
    1.它是一段连续的存储空间
    2.它里面存放的数据类型是相同的
*/

int main(int argc, char const *argv[])
{

#if 0
    /* 方法一：使用定义即初始化 */
    int array[BUFFER_SIZE] = { 0 };
#else
    int array[BUFFER_SIZE];
#endif
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d] = %d\n", idx, array[idx]);
    }
    int len = sizeof(array);
    printf("len:%d\n", len);

    /* 地址 */
    printf("%p\n", &array);    //数组的（首）地址 和数组的首元素的地址是一样的
    printf("%p\n", &array[0]);
    printf("%p\n", &array[1]);
    printf("%p\n", &array[9]);
    printf("len:%d\n", len);
    /* 清除脏数据 */
    memset(array, 0, sizeof(array));
    printf("==============\n");
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d] = %d\n", idx, array[idx]);
    }

#if 1
    /* 数组的越界访问 */
    /* 判断索引的有效性 */
    printf("array[-1]: %d\n", array[-1]);
    printf("array[10]: %d\n", array[10]);
    
#endif





    return 0;
}
