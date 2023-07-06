#include<stdio.h>
void main(){
    int a[6]={7,3,5,4,2,6};
    int i,j,temp;
    for(i=1;i<6;i++){
        temp=a[i];
        j=i-1;
        while((j>=0) && temp<a[j]){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    for(i=0;i<6;i++){
        printf("Sorted Array is\n");
        printf("%d ",a[i]);
    }
}