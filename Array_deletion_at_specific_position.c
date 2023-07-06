#include<stdio.h>
void main(){
    int a[50],i,size,pos;
    printf("Enter size and pos\n");
    scanf("%d %d",&size,&pos);
    printf("Enter Array elements\n");
    for(i=1;i<=size;i++){
        scanf("%d",&a[i]);
    }
    for(i=pos;i<=size;i++){
        a[i]=a[i+1];
    }
    size--;
    printf("Updated Array\n");
    for(i=1;i<=size;i++){
        printf("%d ",a[i]);
    }
}