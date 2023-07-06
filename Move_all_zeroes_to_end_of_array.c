#include<stdio.h>
void main(){
    int a[100],i,n,count=0;
    printf("Enter size");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==0)
        a[count++]=a[i];
       }
    for(i=count;i<n;i++){
        a[count++]=1;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}