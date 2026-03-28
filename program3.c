#include<stdio.h>
int main(){
    int i , sum ,arr[5];

    printf("enter 5 element:");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        sum=sum+arr[i];
    }
    printf("Sum of elemnt:%d",sum);
    return 0;
}