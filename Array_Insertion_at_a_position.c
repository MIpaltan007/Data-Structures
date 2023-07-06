#include<stdio.h>
void main(){
    int a[50],i,num,pos,size;
    printf("Enter size\n");
    scanf("%d",&size);
    printf("Enter Array elements\n");
    for(i=1;i<=size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter number and position for insertion\n");
    scanf("%d %d",&num,&pos);
    for(i=size;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=num;
    size++;
    for(i=1;i<=size;i++){
        printf("%d",a[i]);
    }
}