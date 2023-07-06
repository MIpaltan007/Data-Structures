#include<stdio.h>
void main(){
    int a[100],i,n,k,j,temp;
    printf("Enter Size");
    scanf("%d",&n);
    printf("Enter Array Elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter No of rotation");
    scanf("%d",&k);
    for(j=1;j<=k;j++){
        temp=a[n-1];
        for(i=n-1;i>=1;i--){
            a[i]=a[i-1];
        }
        a[i]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}