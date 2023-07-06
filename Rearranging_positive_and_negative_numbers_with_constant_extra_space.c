#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main(){
    int a[100],i,n,j,temp;
    printf("Enter size");
    scanf("%d",&n);
    printf("enter array");
    for(i=0;i<n;i++){
        scanf("%d",a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<0){
                swap(&a[i],&a[j]);
            }
        }       
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
}
}