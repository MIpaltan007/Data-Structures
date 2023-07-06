#include<stdio.h>
void main(){
    int a[50],b[50],c,d,i,j,k=1,m=5;
    printf("Enter sizes of both arrays\n");
    scanf("%d %d",&c,&d);
   printf("Enter A array\n");
   for(i=0;i<c;i++){
    scanf("%d",&a[i]);
   }
   printf("Enter B array\n");
   for(j=0;j<d;j++){
    scanf("%d",&b[j]);
   }
   for(i=0;i<6;i++){
    for(j=m;j>=k;j--){
        a[j+1]=a[j];
    }
    a[k]=b[i];
    k=k+2;
    m=m+1;
   }
   for(i=0;i<12;i++){
    printf("%d ",a[i]);
   }



}