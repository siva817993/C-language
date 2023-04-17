#include<stdio.h>
struct node
{
    int data;
    struct node *right;
    struct node *left;
};
struct node *parent,*temp,*newnode;
void insert(struct node *parent,int ele)
{
    printf("\nenter element to be insert:");
    scanf("%d",&ele);
    newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=ele;
            newnode->left=NULL;
            newnode->right=NULL;

    if(parent==NULL)
    {
        if(newnode!=NULL)
        {

            parent->data=ele;
            parent=newnode;
        }
        else
        {
            printf("\nmemory full");
        }
    }
    else
    {
        if(ele<parent->data);
        {
        parent->left=insert(parent->left,ele);
        }
        else
        {

        parent->right=insert(parent->right,ele);
        }
        return parent;
    }

}
void inorder(struct node*parent)
{
  if(parent!=NULL)
  {
      inorder(parent->left);
      printf("%d",parent->data);
      inorder(parent->right);
  }
}
int main()
{
    int op=0,ele;
    do
    {
        printf("\n1.insert");
        printf("\n2.inorder");
        printf("\nenter option:");
        scanf("%d",&op);
        switch(op)
        {
            case 1:insert(parent);
            break;
            case 2:inorder(parent);
            break;
        }
    }
}
