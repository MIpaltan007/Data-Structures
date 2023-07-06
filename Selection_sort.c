#include<stdio.h>
void main(){
    int a[8]={77,33,44,11,88,22,66,55};
    int i,j,min,temp;
    for(i=0;i<7;i++){
        min=i;
        for(j=i+1;j<8;j++){
            if(a[j]<a[min]){
                min=j;
            }
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    printf("\nSorted Array");
    for(i=0;i<8;i++){
        printf("%d ",a[i]);
    }

}