#include<stdio.h>

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

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
    int a[5]={1,2,3,4,5};
    int *p=a;
    for(int i=0;i<5;i++){
        printf("a[%d]=%d\n",i,*(p+i));
    }
*/
    int a, b;
    scanf("%d %d",&a,&b);
    printf("Before swap: a=%d, b=%d\n",a,b);
    swap(&a,&b);
    printf("After swap: a=%d, b=%d\n",a,b);
    return 0;
}