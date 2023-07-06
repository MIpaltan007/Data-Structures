#include<stdio.h>
void main(){
    int a[50],n,i,l,h,mid,key;
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter sorted array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter key");
    scanf("%d",&key);
    l=0;
    h=n-1;
    while(l<=h){
        mid=(l+h)/2;
        if(key<a[mid]){
            h=mid-1;
        }
        else if(key>a[mid]){
            l=mid+1;
        }
        else if(key==a[mid]){
            printf("Found key at %d location",mid);
            break;
        }
        
        
    }
}