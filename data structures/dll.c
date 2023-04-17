#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
    struct node*pr;
};
struct node*temp,*newnode,*temp1;
void insertbeg(struct node*head)
{
    int data;
    printf("\nenter element:");
    scanf("%d",&data);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->pr=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head->pr=newnode;
        head=newnode;
    }
    display(head);
}
void display(struct node*head)
{

    if(head==NULL)
    {
        printf("\nno elements:");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;

        }
        printf("\nNULL");
    }
}
void insertend(struct node*head)
{
    int data;
    printf("\nenter element:");
    scanf("%d",&data);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->pr=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;

        }
        temp->next=newnode;
        newnode->pr=temp;
    }
        display(head);
}


    void deletebeg(struct node*head)
    {
     if(head==NULL)
     {
         printf("\n no elements:");
     }
     else if(head->next==NULL && head->pr==NULL)
     {
         temp=head;
         head=NULL;
         free(temp);
     }
     else
     {
         temp=head;
         head=head->next;
         head->pr=NULL;
         free(temp);
     }
     display(head);
    }
    void deleteend(struct node*head)
    {
             if(head==NULL)
     {
         printf("\n no elements:");
     }
     else if(head->next==NULL && head->pr==NULL)
     {
         temp=head;
         head=NULL;
         free(temp);
     }
     else
     {
         temp=head;
         while(temp->next!=NULL)
         {
             temp=temp->next;
         }
         temp->pr->next=NULL;
         free(temp);

     }
     display(head);


    }




void main()
{
    int op;
struct node*head=(struct node*)malloc(sizeof(struct node));
struct node*cu=(struct node*)malloc(sizeof(struct node));
struct node*cu1=(struct node*)malloc(sizeof(struct node));
    head->data=21;
    cu->data=42;
    cu1->data=07;
    cu1->next=NULL;
    cu1->pr=cu;
    cu->next=cu1;
    cu->pr=head;
    head->next=cu;
    head->pr=NULL;
    while(op<=5)
    {
    printf("\n1.insertbeg");
        printf("\n2.insertend");
            printf("\n3.deletebeg");
            printf("\n4.deleteend");
            printf("\n enter the option:");
            scanf("%d",&op);
            switch(op)
            {
                case 1:insertbeg(head);
                break;
                case 2:insertend(head);
                break;
                case 3:deletebeg(head);
                break;
                case 4:deleteend(head);
                break;
                default:printf("\nenter correct choice:");
                break;

            }
    }
}
