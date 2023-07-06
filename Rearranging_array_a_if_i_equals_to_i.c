#include<stdio.h>
void main(){
    int a[100],i,n,j,temp;
    printf("Enter size");
    scanf("%d",&n);
    printf("Enter elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Given Array\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            if(a[j]==i){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
                break;
            }
        }
    }
    for(i=0;i<n;i++){
        if(a[i]!=i){
           a[i]=-1;
        }
    }
    printf("\nArray After Rearranging\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}