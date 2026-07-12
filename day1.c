#include<stdio.h>
int main(void){
/*
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d is greater than %d\n",a,b);
    }
    else if(a<b){
        printf("%d is greater than %d\n",b,a);
    }
    else{
        printf("Both numbers are equal\n");
    }
*/
    for(int i=1;i<10;i++){
        for(int j=1;j<=i;j++){
            printf("%d*%d=%d\t",j,i,i*j);
        }
        printf("\n");
    }
    return 0;
}