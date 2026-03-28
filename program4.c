#include<stdio.h>
int main(){
    int i , n, arr[5],found=0;

    printf("enter 5 element:");
    for (i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter element to search:");
    scanf("%d",&n);

    for(i=0;i<5;i++){
        if(arr[i]==n){
            printf(" found element at postion %d",i+1);
            found=1;
            break;
        
             }
         }
        if(arr[i]==0){
            printf("Not found element");
    }
    return 0;


}