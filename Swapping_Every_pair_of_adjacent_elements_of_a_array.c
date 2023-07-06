#include<stdio.h>
void main(){
    int a[]={30,20,40,50,60,90};
    int i,temp;
    for(i=0;i<6;i++){
        if(i%2==0){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(i=0;i<6;i++){
        printf("%d ",a[i]);
    }
}