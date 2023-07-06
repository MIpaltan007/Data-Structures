#include<stdio.h>
void main(){
    int a[50],size,pos,i;
    printf("Enter size");
    scanf("%d",&size);
    printf("Array Elements\n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Position for deletion??");
    scanf("%d",&pos);
    for(i=pos-1;i<size-1;i++){
        a[i]=a[i+1];
    }
    size--;
    printf("Updated Array");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}