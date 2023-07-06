#include<stdio.h>
void main(){
    int a[100],i,n;
    printf("Enter size");
    scanf("%d",&n);
    printf("Enter Array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(i%2==0)
        a[i]>=a[i-1];
        else
        a[i]<=a[i-1];
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}