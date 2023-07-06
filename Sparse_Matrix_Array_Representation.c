#include<stdio.h>
void main(){
    int a[100][100],r,c,i,j;
    printf("No of rows and columns\n");
    scanf("%d %d",&r,&c);
    printf("Enter Sparse Matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The 3 Tuple Representation of sparse matrix\n");
   
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]!=0){
                printf(" \n  %d   %d   %d",i+1,j+1,a[i][j]);
            }
        }
        printf("\n");
        
    }
}