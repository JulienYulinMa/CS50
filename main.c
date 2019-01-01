#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char *p1 = "hello";
    //char const *p1 = "hello";
    printf("指针的值:%p,指针所指向的值:%c\n",p1, *p1);
    p1++;
    printf("指针的值:%p,\n",p1);
    *p1 = "world";
    printf("指针所指向的值:%c\n", *p1);
    //printf("Hello world!\n");
    return 0;
}
