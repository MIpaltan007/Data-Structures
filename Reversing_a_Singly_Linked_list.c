#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;
void reverse(){
 struct node *prevnode=0,*currentnode,*nextnode;
 currentnode=prevnode=head;
 while(nextnode->next!=NULL){
     nextnode=nextnode->next;
     currentnode->next=prevnode;
     prevnode=currentnode;
     currentnode=nextnode;
 }
 head=prevnode;
}