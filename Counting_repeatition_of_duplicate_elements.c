#include<stdio.h>
void main(){
    int a[50],n,i,j;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter Array\n ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            j=i+1;
            while(a[i]==a[j])
            j++;
            printf("%d is appearing %d times",a[i],j-i);
            i=i+1;
        }
    }
}