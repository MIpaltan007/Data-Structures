#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;
void beginsert();
void endinsert();
void midinsert();
void begdelete();
void enddelete();
void middelete();
void display();
void main(){
    int choice=0;
    while(choice!=8){
        printf("\n1.Insert At Beginning\n 2.Insert At End\n 3.Insert in middle\n 4.Delete at beginning\n 5.Delete at end\n 6.Delete at last\n 7.Display\n 8.Exit\n");
        printf("Enter choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:beginsert();
            break;
            case 2:endinsert();
            break;
            case 3:midinsert();
            break;
            case 4:begdelete();
            break;
            case 5:enddelete();
            break;
            case 6:middelete();
            break;
            case 7:display();
            break;
            case 8:exit(0);
            break;
            default:
            printf("Invalid Input\n");
        }
    }
}
void beginsert(){
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("OverFlow\n");
    }
    else{
        printf("Enter data\n");
        scanf("%d",&ptr->data);
        ptr->next=head;
        head=ptr;
    }
}
void endinsert(){
    struct node *ptr,*temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d",&ptr->data);
    ptr->next=NULL;
    if(ptr==NULL){
        printf("Overflow\n");
    }
    else{
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->next=NULL;
    }
}  
void midinsert(){
    int i=1,pos;
    struct node *ptr,*temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("Overflow\n");
    }
    else{
        temp=head;
        printf("Enter Position\n");
        scanf("%d",&pos);
        while(i<pos){
            temp=temp->next;
            i++;
        }
        printf("Enter Data\n");
        scanf("%d",ptr->data);
        ptr->next=temp->next;
        temp->next=ptr;
    }
}
 void begdelete(){
            struct node *ptr;
            if(head==NULL){
                printf("list is empty\n");
            }
            else{
            ptr=head;
            head=head->next;
            free(ptr);
            }
        }

        void enddelete(){
            struct node *ptr,*ptr1;
            if(head==NULL){
                printf("List is empty\n");
            }
            else if(head->next==NULL){
                head=NULL;
                free(head);
            }
            else{
                ptr=head;
                while(ptr->next!=NULL){
                    ptr1=ptr;
                    ptr=ptr->next;
                }
                ptr1->next=NULL;
                free(ptr);
            }

        } 
    void middelete(){
        struct node *ptr,*ptr1;
        int pos,i=1;
        printf("Position?\n");
        scanf("%d",&pos);
        if(head==NULL){
            printf("List is empty\n");
        }
        else{
            ptr=head;
            while(i<pos-1){
                ptr=ptr->next;
                i++;
            }
            ptr1=ptr->next;
            ptr->next=ptr1->next;
            free(ptr1);
        }
    }
    void display(){
        struct node *ptr;
        ptr=head;
        while(ptr!=0){
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
    }
