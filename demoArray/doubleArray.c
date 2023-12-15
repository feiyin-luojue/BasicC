#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE5 5
#define ROW 3
#define COLUMN 4


int main(int argc, char const *argv[])
{
#if 1
    /* 从一维数组到二维数组 */
    int array[BUFFER_SIZE5] = {0};
    int len = sizeof(array);
    printf("len:%d\n", len);

    /* 二维数组定义 */
    int array2[ROW][COLUMN] = {0};
    len = sizeof(array2);
    printf("len:%d\n", len);

    array2[0][0] = 100;
    printf("array2[0][0]:%d\n", array2[0][0]);

    int count = 1;
    /* 给二维数组赋值 */
    for (int idx = 0; idx < ROW; idx++)
    {
        for (int jdx = 0; jdx < COLUMN; jdx++)
        {
            array2[idx][jdx] = count++;
        }
    }

    for (int idx = 0; idx < ROW; idx++)
    {
        for (int jdx = 0; jdx < COLUMN; jdx++)
        {
            printf("array2[%d][%d]:%d\t", idx, jdx, array2[idx][jdx]);

        }
        putchar(10);
    }


#endif

    return 0;
}
