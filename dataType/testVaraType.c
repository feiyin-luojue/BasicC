#include <stdio.h>
#include <stdlib.h>

/* 数据类型 */
int main()
{
#if 0

    short smallValue = 0;
    int len = sizeof(smallValue);
    printf("len: %d,smallValue = %d\n",len,smallValue);

    long bigValue = 0;
    len = sizeof(bigValue);
    printf("len: %d,bigValue = %ld\n",len,bigValue);

    /*变量的命名：数字，字母，下划线。只能以字母和下划线开头 */
    /*数据类型对应的是内存的存储空间 */
    int age = 6;
    len = sizeof(age);      /*整形就是整数*/
    printf("len:%d, age = %d\n", len, age);    /* %d就是打印整数*/
    printf("hello world!\n");
#if 0
    /* 浮点数*/
    float weight = 50.5;
    len = sizeof(weight);   
    printf("len:%d, weight = %f\n", len, weight);   /* %f就是打印小数/浮点数 */
#else
    double weight = 50.5;
    len = sizeof(weight);   
    printf("len:%d, weight = %f\n", len, weight);   /* %f就是打印小数/浮点数 */
#endif

    char sex = 'm';
    len = sizeof(sex);
    printf("len:%d, sex = %c\n", len, sex);

#endif

#if 0
    /* 有符号 */
    char sex = -1;
    int len = sizeof(sex);
    printf("len: %d, sex = %c sex = %d\n", len, sex, sex);
 
    char default_value = 137;
    len = sizeof(default_value);
    printf("len: %d, sex = %c sex = %d\n", len, default_value, default_value);

    /* 无符号 和 有符号的区别*/
    unsigned char m_value = -1;
    len = sizeof(m_value);
    printf("len: %d, sex = %c sex = %d\n", len, m_value, m_value);
#endif

#if 0
    int val = 6.6;
    printf("val:%d\n",val);

    val++;
    printf("val:%d\n",val);
    val--;
    printf("val:%d\n",val);

    ++val;
    printf("val:%d\n",val);
    --val;
    printf("val:%d\n",val);

    val = val + 100;
    printf("val:%d\n",val);

    val += 100;
    printf("val:%d\n",val);

#endif

 #if 0
    int m_value = 10;
    int discuss = m_value / 3;
    int remainder = m_value % 3;

    printf("discuss:%d\n",discuss);
    printf("remainder:%d\n",remainder);

    /* 随机数 */
    int randomVal = rand();
    printf("randomVal:%d\n", randomVal);

    /*中奖率是25% */
    int lotteryRate = randomVal % 4;
    printf("lotteryRate:%d\n",lotteryRate);

#endif

#if 0

    int a = 51;
    // 32 + 16 + 2 + 1
    // 2^5 + 2^4 + 2^0  
    printf("a:%d\n", a);
    a <<= 1;
    printf("a:%d\n", a);

#endif

#if 0

    int val = 51;
    int orVal = val | 7;
    int andVal = val & 2;

    printf("orVal:%d\n", orVal);
    printf("andVal:%d\n", andVal);

    /* 非 */
    int notVal = val;
    printf("notVal:%d\n", notVal);

#endif

#if 0

    /* 且或非 */
    int condition1 = 1;
    int condition2 = 6;
    /* 或：只要有一个条件满足，就返回1 */
    if((condition1 == 1) || (condition2 == 5))
    {
        printf("hello world\n");
    }
    else
    {
        printf("not hello world\n");
    }

    /* 且：两边都被满足于，就返回1，否则返回0. */
    if((condition1 == 1) && (condition2 == 5))
    {
        printf("hello world\n");
    }
    else
    {
        printf("not hello world\n");
    }

#endif

#if 1
    /* 运算符 */
    int num1 = 10;
    int num2 = 30;

    int num3 = num1 > num2 ? 100 : 666;
    printf("num3:%d\n", num3);




#endif
    return 0;
}
