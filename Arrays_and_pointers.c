#include<stdio.h>
void main(){
    int a[]={6,2,1,5,3};
    int *q;
    q=a;
    q++;
    int b=10;
    int *p;
    p=&b;
    printf("%d",*a);
    printf("%d",*(a+1));
    printf("%d",*a+1);
}