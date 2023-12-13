#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE32 32

/* 指针 */
int main(int argc, char const *argv[])
{
#if 0
    // 1.指针怎么定义
    // 基础数据类型
    /* 建议（Tips）：定义变量（任意类型）记得初始化*/
    int a = 0;
    long b = 0;

    /* 指针的定义 */
    int *p = NULL;
#endif

#if 0
    /* 指针的使用:指针内部存放的是某变量的地址 */   
    int a = 5;
    int *p = &a;

    printf("a:%d\n", a);
    printf("&a:%p\n", &a);
    printf("*(&a):%d\n", *(&a));

    printf("*p = %d\n", *p);
    printf("p = %p\n", p);
/*
    printf("sizeof(*p) = %ld\n", sizeof(*p));
    printf("sizeof(p) = %ld\n", sizeof(p));
*/
    printf("&p: %p\n", &p);
#endif

#if 0
    /*这个地方不对。 */
    int *ptr = &p;
    printf("ptr:%p\n, ptr");
#endif

#if 0
    int **ptr = &p;
    printf("ptr:%p\n", ptr);

    printf("*ptr:%p\n", *ptr);
    printf("**ptr:%d\n",**ptr);
#endif

#if 0
    /* 指针的特性1:
            指针占用的内存大小是8个字节（64位操作系统） 
            如果是32位的操作系统是4个字节 
    */
    int a = 10;
    int len = sizeof(a);
    printf("len:%d\n", len);

    char p = 97;
    len = sizeof(p);
    printf("len:%d\n", len);

    char *ptr = &p;
    printf("%c\t%d\n", *ptr, *ptr);

    int *ptrInt = &a;
    printf("%d\n", *(&a));
    printf("%d\n", *ptrInt);
#endif

    /* 指针特性2：指针和字符串 */
    /* 字符串是区别于字符数组的。*/
    char * ptr1 = "hello world";
    int len = sizeof(ptr1);
    printf("len:%d\n", len);

    /* Q1:怎么获取字符串的长度 */
    int length = strlen(ptr1);
    printf("length:%d\n", length);

    /* Q2: 字符数组的赋值 */
    char name[BUFFER_SIZE32] = { 0 };
    strcpy(name, "zhangsan"); 
    printf("name:%s\n", name);

    /*Q3: 我要给字符串赋值 bug */
    char *ptr2 = NULL;
#if 0
    ptr2 = "zhangsan";
    printf("ptr2:%s\n", ptr2);
#else
    strcpy(ptr2, "zhangsan");
    printf("name:%s\n", name);    
#endif

    /* 堆空间 */
    /* void *是一个指针，这个指针被称为万能指针 */
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_SIZE32);

    strcpy(ptr, "zhangsan");
    printf("ptr:%s\n", ptr);
    return 0;
}
