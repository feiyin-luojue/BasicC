#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE10 10

/* 内存泄漏:3种场景
    1.野指针
    2.malloc出的堆空间没有被释放
    3.踩内存（read / write is invalid）
*/

int main(int argc, char const *argv[])
{
    /* Q1.什么情况下会导致内存泄漏 */
    // case 1: 野指针
#if 0
    int a;
    printf("a:%d\n", a);
    
    int array[BUFFER_SIZE10];
    for (int idx = 0; idx < sizeof(array) / sizeof(array[0]); idx++)
    {
        printf("%d\t", array[idx]);
    }
#endif

#if 0
    char *p;   // p = 0xf4645765765;
    printf("\n");
#endif

    // case2:
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_SIZE10);
    if (!ptr)
    {
        /* 状态码 */
        return -1;
    }
    /* 使用malloc分配的空间，数据是脏的 */
    memset(ptr, 0, sizeof(char) * BUFFER_SIZE10);
#if 0
    /* 极度危险的函数 该用strncpy */
    strcpy(ptr, "hello worldreyhegthytj");
#else
    /* 使用安全 */
    strncpy(ptr, "hello worldger", BUFFER_SIZE10 - 1);

#endif
    printf("ptr:%c\n", *ptr);

    if(ptr != NULL)
    {
        free(ptr);
        ptr = NULL;
    }

    if(ptr != NULL)
    {
        free(ptr);
        ptr = NULL;
    }

    return 0;
}
