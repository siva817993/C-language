#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

};
struct node *head, *temp,*newnode,*temp1;
void insertbeg();
void insertend();
void deletebeg();
void deleteend();
void display();
void main()
{
    int option=0;
    head=NULL;
    while(option<=5)
    {
        printf("\n menu");
        printf("\n 1.insert at begining");
        printf("\n 2.insert at end");
        printf("\n 3.delete  at begining");
        printf("\n 4.delete at end");
        printf("\n 5.display");
        printf("\n enter the option:");
        scanf("%d",&option);
        switch(option)
        {
            case 1:insertbeg();
                   break;
            case 2:insertend();
                   break;
            case 3:deletebeg();
                   break;
            case 4:deleteend();
                   break;
            case 5:display();
                   break;
            default:break;


        }
    }
}

void display()
{
    if(head==NULL)
    {
        printf("no elements in the list");
    }
    else
    {
        temp=head;
        do
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }while(temp!=head);
        printf("%d",head->data);
    }
}
void insertbeg()
{
    int x;
    printf("enter x value:");
    scanf("%d",&x);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(head==NULL)
    {
       head=newnode;
       newnode->next=head;
    }
    else
    {
        newnode->next=head;
        temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        head=newnode;
    }

}
void insertend()
{
   int x;
    printf("enter x value:");
    scanf("%d",&x);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(head==NULL)
    {
       head=newnode;
       newnode->next=head;
    }
    else
    { newnode->next=head;
        temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=newnode;

    }
}
void deletebeg()
{
    if(head==NULL)
    {
        printf("\n no elements to delete..");
    }
    else if(head->next==head)
    {
     temp=head;
     head=NULL;
     free(temp);
    }
    else
    {
        temp=head;
        head=head->next;
        temp1=head;
        while(temp1->next!=temp)
        {
            temp1=temp1->next;
        }
        temp1->next=head;
        free(temp);
    }
}
void deleteend()
{

    if(head==NULL)
    {
        printf("\n no elements to delete..");
    }
    else if(head->next==head)
    {
        temp=head;
        head=NULL;
        free(temp);
    }
    else
    {
     temp=head;
     temp1=head->next;
     while(temp1->next!=head)
     {
         temp=temp->next;
         temp1=temp1->next;
     }
     temp->next=head;
     free(temp1);
    }
}
