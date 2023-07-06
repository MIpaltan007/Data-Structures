#include<stdio.h>
void main(){
    int a[50],i,n,item,found=0;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter Array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter item to be searched\n");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if(a[i]==item){
            printf("Element found at %d",i+1);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("\nElement Not found");
    }

    

}