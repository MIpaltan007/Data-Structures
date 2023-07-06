#include<stdio.h>
void main(){
    int a[50],i,l,r,n,mid,found=0,data;
    printf("enter n\n");
    scanf("%d",&n);
    l=0,r=n-1;

    printf("Enter Array Elements\n");
    for(i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    printf("Enter data\n");
    scanf("%d",&data);
    while(l<r)
    {
        mid=(l+r)/2;
        if(data<a[mid])
        {
            r=mid-1;
        }
        else if(data>a[mid])
        {
            l=mid+1;
        }
        else if(data==a[mid]){
            printf("Loc=%d\n",mid);
            found=1;
            break;
        }

    }


}