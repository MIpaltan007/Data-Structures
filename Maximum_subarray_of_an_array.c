#include<stdio.h>
void main(){
    int a[100],i,n,sum=0,maxSum=0;
    printf("Enter array size");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++){
        sum+=a[i];
        printf("%d\n",sum);
       
         
        if(sum>maxSum){
            maxSum=sum;
        }
        if(sum<0)
        sum=0;
    }
    printf("Maximum sub array is %d",maxSum);
}