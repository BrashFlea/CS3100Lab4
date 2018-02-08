#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *) malloc(sizeof(int) * 100);
    ptr[100] = 0;

    return 0;
}