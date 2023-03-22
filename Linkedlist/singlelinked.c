#include<stdio.h>
struct  node
{
    int data;
    struct node *next;
};
void append(struct node** head_ref,int new_data)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=new_data;
    newnode->next=NULL;
    if(*head_ref==)
}
void push(struct node** head_ref,int new_data)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=new_data;

}