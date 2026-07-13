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

/*
float arr_average(int arr[], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return (float)sum/size;
}
*/

int arr_max(int *arr,int size){
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}  

int arr_min(int *arr,int size){
    int min=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int maximum=arr_max(arr, n);
    int minimum=arr_min(arr, n);
    printf("The maximum element in the array is: %d\n", maximum);
    printf("The minimum element in the array is: %d\n", minimum);
    return 0;
}