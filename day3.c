#include<stdio.h>

int  main(void){
    int a;
    int *p=&a;
    a=10;
    printf("a=%d\n", a);
    printf("&a=%p\n",&a);
    printf("p=%p\n",p);
    printf("*p=%d\n", *p);
    *p=20;
    printf("a=%d\n", a);
    return 0;
}