#include<stdio.h>

int jj(){
    int sum=0;
    for(int j=1;j<=100;j++){
        if(j%2!=0){
            sum+=j;
        }
    }
    return sum;
}

int main(){
    int result=jj();
    printf("The sum of odd numbers from 1 to 100 is: %d\n", result);
    return 0;
}