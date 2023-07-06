#include<stdio.h>
void main(){
    int a[50],n,i,sum,SUM=0;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("Enter array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        SUM=SUM+a[i];
    }
    for(i=6;i<=17;i++){
        sum+=i;
    }
    printf("Missing Element is %d",sum-SUM);

}