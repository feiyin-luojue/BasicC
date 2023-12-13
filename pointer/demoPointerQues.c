#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /* 指针和字符串 */
    char *ptr = "hello world";

    /* Q1:什么叫字符串常量 */
    /* 1.打印字符串的每一个字符 */
    /* way1:使用for循环的方式 */
#if 0
    int len = strlen(ptr);
    char p = '0';
    for (int  idx = 0; idx < strlen(ptr); idx++)
    {
        p = *ptr;
        printf("p:%c, idx:%d\n", p, idx);
        ptr++;
        printf("strlen(ptr):%ld\n", strlen(ptr));
    }
#elif 0
    /* 实现方式1 */
    int len = strlen(ptr);
    char p = '0';
    for (int  idx = 0; idx < len; idx++)
    {
        p = *ptr;
        printf("p:%c, idx:%d\n", p, idx);
        ptr++;
    }
#else
    /* 实现方式2：*/
    while (*ptr != '\0')
    {
        printf("%c\t", *ptr);
        ptr++;
    }
    putchar(10);
#endif

    /* Q3: 我要给字符串赋值 bug. */
    char *ptr2 = NULL;
    printf("&ptr2:%p\n", &ptr2);
#if 1
    printf("%p\n", &("zhangsan"));
    ptr2 = "zhangsan";
#else
    strcpy(ptr2, "zhangsan");
#endif
    printf("ptr2:%s\n", ptr2);


    return 0;
}
