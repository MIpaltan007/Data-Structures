#include<stdio.h>
void main(){
    int a[50],n,i,temp;
    printf("Enter size\n");
    scanf("%d",&n);
    printf("Enter Array\n");
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n/2;i++){
        temp=a[i];
        a[i]=a[n-i+1];
        a[n-i+1]=temp;
    }
}