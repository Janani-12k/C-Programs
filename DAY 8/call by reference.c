#include <stdio.h>
#include <stdlib.h>

void hii(int *pt)
{
    *pt += 1;
}

void hello(char *pt)
{
    *pt += 1;
}

int main()
{
    int a = 10;
    char ch = 'D';

    hii(&a);         
    hello(&ch);      

    printf("%d\n", a);   
    printf("%c\n", ch);  

    return 0;
}
