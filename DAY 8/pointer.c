
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr=malloc(sizeof(int));
    printf("%p\n",ptr);
    printf("%d\n",*ptr);

    return 0;
}
