#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char *p1 = "hello";
    //char const *p1 = "hello";
    printf("ָ���ֵ:%p,ָ����ָ���ֵ:%c\n",p1, *p1);
    p1++;
    printf("ָ���ֵ:%p,\n",p1);
    *p1 = "world";
    printf("ָ����ָ���ֵ:%c\n", *p1);
    //printf("Hello world!\n");
    return 0;
}
