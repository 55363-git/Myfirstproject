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

    for(int i=1;i<10;i++){
        for(int j=1;j<=i;j++){
            printf("%d*%d=%d\t",j,i,i*j);
        }
        printf("\n");
    }
*/
    int sum=0;
    for(int i=1;i<=100;i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    printf("Sum of odd numbers from 1 to 100 is: %d\n", sum);
    return 0;
}