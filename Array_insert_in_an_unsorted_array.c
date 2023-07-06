#include<stdio.h>
void main(){
    int a[50],size,i,num,pos;
    printf("Enter size of a array");
    scanf("%d",&size);
    printf("Enter elements of array");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter number to be inserted");
    scanf("%d",&num);
    printf("Enter position");
    scanf("%d",&pos);
    for(i=size-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    size++;
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}