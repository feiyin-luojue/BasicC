#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE32   32

/* 作业：手写字符串strlen, strcpy, strcat, strcmp */
/*  */
int main(int argc, char const *argv[])
{
#if 0
    /* 字符数组 */
    char array[BUFFER_SIZE16];
    /* 数组初始化*/
    memset(array, 0, sizeof(array)); 

    int len = sizeof(array);
    printf("len:%d\n", len);
#endif

#if 0
    /* 字符数组 */
    char array[BUFFER_SIZE16] = "hello world";
    int len = sizeof(array);
    printf("len:%d, array:%s\n", len, array);
#endif
    
#if 0
    /* 字符串（字符数组） */
    char array1[BUFFER_SIZE32] = "hello world";
    /* 第一个 strlen */
    int len = strlen(array1);
    printf("len:%d\n", len);

    /* 第二个 strcpy */
    char name[BUFFER_SIZE32];
    memset(name, 0, sizeof(name));
    strcpy(name, "zhangsan");
    printf("name:%s\n", name);

    /* 第三个 strcat */
    strcat(name, " is a boy");
    printf("name:%s\n", name);

    /* 第四个 strcmp */
    char name2[BUFFER_SIZE32] = "wangwu";
    int ret = strcmp(name,name2);
    printf("ret:%d\n", ret);

#endif

#if 0
    /* 字符串 */
    /* 指针出入 */
    char * ptr = "hello world";
    int len = strlen(ptr);
    int size = sizeof(ptr);
    printf("len:%d\n", len);
    printf("size:%d\n", size);
#endif
    return 0;
}
