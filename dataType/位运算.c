#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 3, b = 4;
    int num,temp;
    while (b != 0)
    {
        num = a^b;
        temp = a & b;
        a = num;
        b = temp;
    }
    printf("sum = %d\n",a);
    return 0;
}
