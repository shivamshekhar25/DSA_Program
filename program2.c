#include<stdio.h>
int main(){
int i, arr[5],min;
printf("enter 5 element :");
for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
}
min=arr[0];
for(i=1;i<5;i++){
    if(arr[i]<min){
        min=arr[i];
    }
}
printf("minimum element:%d",min);
return 0;

}