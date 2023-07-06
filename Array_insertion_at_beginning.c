#include<stdio.h>
void main(){
    int a[50],i,size,num;
    printf("Enter inserting number and size \n");
    scanf("%d %d",&num,&size);
    printf("Enter Array elements\n");
    for(i=1;i<=size;i++){
        scanf("%d",&a[i]);
    }
    for(i=size;i>=1;i--){
        a[i+1]=a[i];
    }
    a[1]=num;
    size++;
    printf("\n Updated Array\n");
    for(i=1;i<=size;i++){
        printf("%d",a[i]);
    }

}