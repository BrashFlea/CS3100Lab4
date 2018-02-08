#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *ptr;
    ptr = (int *) malloc(sizeof(int) * 100);
    free(ptr);
    printf("%d\n", ptr[50]);

    return 0;
}