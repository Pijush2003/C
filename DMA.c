// #include<stdint-gcc.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));

    ptr[0] = 4;
    ptr[1] = 5;
    ptr[2] = 67;
    ptr[3] = 89;
    ptr[4] = 90;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }
    return 0;
}