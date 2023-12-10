#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 1;
    int b = 1;
#if 0
    if (a++ == 1)
    {
        printf("1++ == 1\n");
    }
    else
        printf("1++ budengyu 1\n");

if (++b == 1)
    {
        printf("++1 == 1\n");
    }
    else
        printf("++1 budengyu 1\n");

#endif
    printf("1++ == %d\n",a++);
    printf("++1 == %d\n",++b);
    return 0;
}
