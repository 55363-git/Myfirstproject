#include<stdio.h>
/*
int jj(){
    int sum=0;
    for(int j=1;j<=100;j++){
        if(j%2!=0){
            sum+=j;
        }
    }
    return sum;
}
*/

float arr_average(int arr[], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return (float)sum/size;
}

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    float average=arr_average(arr, n);
    printf("The average of the array is: %.2f\n", average);
    return 0;
}