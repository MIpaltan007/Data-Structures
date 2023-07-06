#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head,*tail; 
void createDLL();
void insertatbeg();
void insertatend();
void insertatmid();
void deleteatbeg();
void deleteatend();
void deleteatmid();
void display();
void main(){
    int choice;
    while(choice!=9)
    {
        printf("\n1.Create a DLL\n2.Insert At Beginning\n3.Insert At End\n4.Insert At Mid\n5.Delete at Beginning\n6.Delete at End\n7.Delete at mid\n.8.Display\n");
        printf("Enter Choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:createDLL();
            break;
            case 2:insertatbeg();
            break;
            case 3:insertatend();
            break;
            case 4:insertatmid();
            break;
            case 5:deleteatbeg();
            break;
            case 6:deleteatend();
            break;
            case 7:deleteatmid();
            break;
            case 8:display();
            break;
            case 9:exit(0);
            break;
            default:
            printf("\n Invalid Input\n");
        }
    }
}
