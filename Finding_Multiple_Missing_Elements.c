#include<stdio.h>
void main(){
    int a[50],n,i,diff=6;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("Enter Array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]-i!=diff){
            while(diff<a[i]-i){

            printf("%d ",i+diff);
            diff++;
        }
    }
}}