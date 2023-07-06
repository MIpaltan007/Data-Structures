/*Transposition*/
#include<stdio.h>
#include<stdlib.h>
void main(){
    int a[50],i,n,key;
    printf("Enter no of elements\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter key\n");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(key==a[i])
        {
            swap(&a[i],&a[i-1]);
           printf("\n%d",i);
        }
    }
    
}
void swap(int *a, int *b){
    int t;
    t=*a;
    *a=*b;
}