#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node *head,*temp,*newnode,*temp1;
void insertbeg();
void insertend();
void deletbeg();
void deleteend();
void display();
void main()
{
  int op=0;
  head=NULL;
  while(op<=5)
  {
      printf("\n menu");
      printf("\n 1.insertbeg");
       printf("\n 2.insertend");
       printf("\n 3.delettbeg");
       printf("\n 4.deleteend");
        printf("\n 5.display()");
         printf("\n enter the option");
         scanf("%d",&op);
         switch(op)
         {
           case 1:insertbeg() ;
           break;
                      case 2:insertend();
                  break;
                             case 3:deletbeg() ;
           break;
                      case 4:deletend() ;
           break;
                      case 5:display() ;
           break;
           default:break;
         }}}
         void display()
         {
             if(head==NULL)
                printf("\n no elements");
             else
             {
                 temp=head;
                 while(temp!=NULL)
                 {
                     printf("%d->",temp->data);

                     temp=temp->next;
                 }
                 printf("NULL");
             }
         }
         void insertbeg()
         {
             int x;
             printf("\n enter x value:");
             scanf("%d",&x);
             newnode=(struct node*)malloc(sizeof(struct node));
             newnode->data=x;
             newnode->next=NULL;
             if (head==NULL)
             {
                 head=newnode;

             }
             else
             {
                 temp=head;
                 newnode->next=temp;
                 head=newnode;

             }
         }
                  void insertend()
         {
             int x;
             printf("\n enter x value:");
             scanf("%d",&x);
             newnode=(struct node*)malloc(sizeof(struct node));
             newnode->data=x;
             newnode->next=NULL;
             if (head==NULL)
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


             }
         }
                  void deletbeg()
         {

             if (head==NULL)
             {
                printf("\n no elements ");

             }
             else
             {
                 temp=head;
                 head=head->next;
                 free(temp);

             }
         }
          void deletend()
         {

             if (head==NULL)
             {
                printf("\n no elements ");

             }
             else if(head->next==NULL)
             {
                 temp=head;
                 head=head->next;
                 free(temp);

             }
             else
             {
                 temp=head;
                 temp1=head->next;
                 while(temp1->next!=NULL)
                 {
                     temp=temp->next;
                     temp1=temp1->next;
                 }
                 temp->next=NULL;
                 free(temp1);
             }
         }
























