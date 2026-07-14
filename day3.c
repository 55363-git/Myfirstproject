#include<stdio.h>

int  main(void){
/*
    int a;
    int *p=&a;
    a=10;
    printf("a=%d\n", a);
    printf("&a=%p\n",&a);
    printf("p=%p\n",p);
    printf("*p=%d\n", *p);
    *p=20;
    printf("a=%d\n", a);
*/
    int a[5]={1,2,3,4,5};
    int *p=a;
    for(int i=0;i<5;i++){
        printf("a[%d]=%d\n",i,*(p+i));
    }
    return 0;
}