#include<stdio.h>
void main(){
    int a[100],i,a,index[10],j,b,temp,n;
    printf("Enter sizes");
    scanf("%d",&n);
    printf("Enter Array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter indexes");
    for(j=0;j<n;j++){
        scanf("%d",&index[j]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(index[i]>index[j]){
               temp=index[i];
               index[i]=index[j];
               index[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[index[j]]);
        }
    }
}