#include<stdio.h>
void main(){
    int a[50],b[50],i,j,m,n;
    printf("Enter sizes of both the arrays\n");
    scanf("%d %d",&m,&n);
    printf("Enter first array\n");
    for(i=0;i<m;i++){
          scanf("%d",&a[i]);
    }
    printf("Enter two array\n");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        a[m+i]=b[i];
    }
    for(i=0;i<(m+n);i++){
        printf("%d ",a[i]);
    }
}