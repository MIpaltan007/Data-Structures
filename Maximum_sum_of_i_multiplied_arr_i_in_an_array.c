#include<stdio.h>
void main(){
    int a[100],i,n,max;
    printf("Enter size of elements");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    max=1*a[1];
    for(i=1;i<=n;i++){
        
        if(i*a[i]>max){
            max=i*a[i];
    }
    
    
}
printf("Maximum value of i*a[i] is %d",max);

}
