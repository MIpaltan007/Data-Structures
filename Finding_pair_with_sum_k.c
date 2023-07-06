#include<stdio.h>
void main(){
    int a[50],n,k,i,j;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter reqd sum of pair\n");
    scanf("%d",&k);
    printf("Enter Array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if( a[i]+a[j]==k){
                 printf("%d %d are the reqd pair\n",a[i],a[j]);
            }
        }
    }
}