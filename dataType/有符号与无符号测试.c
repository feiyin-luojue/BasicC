#include <stdio.h>
int main(int argc, char const *argv[])
{
    char sex = -1;
    int len = sizeof(sex);
    printf("len: %d, sex = %c sex = %d\n", len, sex, sex);
 
    char default_value = 137;
    len = sizeof(default_value);
    printf("len: %d, sex = %c sex = %d\n", len, default_value, default_value);

    unsigned char m_value = -1;
    len = sizeof(m_value);
    printf("len: %d, sex = %c sex = %d\n", len, m_value, m_value);
    return 0;
}
