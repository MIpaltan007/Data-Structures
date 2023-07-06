#include<stdio.h>
#include<stdlib.h>
struct node{ 
    int data;
    struct node *next;
};
struct node *head=0,*second=0,*third=0;
struct node *temp;
void begininsert(){
    struct node *ptr;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("Overflow\n");
    }
    else{
        printf("Enter item\n");
        scanf("%d",&ptr->data);
        ptr->next=head;
        head=ptr;
    }
}
void display() {
    temp = head;
    while (temp->next != 0)
    {
        printf("%d-->", temp->data);
    }
    
}
void main(){
    
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head->data=7;
    head->next=second;
    second->data=1;
    second->next=third;
    third->data=9;
    third->next=NULL;
    begininsert();
    display();
}   
