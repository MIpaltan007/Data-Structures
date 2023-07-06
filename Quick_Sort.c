#include<stdio.h>
void swap(int a,int b){
    int t;
    t=a;
    a=b;
    b=t;
}
void main(){
    int a[8]={35,50,15,25,80,20,90,45};
    int pivot=a[0];
    int i,j;
    for(i=1;i<7;i++){
        for(j=7;j<1;j--){
            if((a[i]>pivot && a[j]<pivot) && i<j){
                swap(a[i],a[j]);
            }
            else if((a[i]>pivot && a[j]<pivot) && i>=j){
               swap(pivot,a[j]);
            }
    }
}
printf("Sorted Array is");
for(i=0;i<8;i++){
    printf("%d ",a[i]);
}
}