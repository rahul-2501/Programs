/*implementation of linked list which performs only insert and display */

#include<stdio.h>
#include<stdlib.h>
typedef struct node{
 int data;
 struct node *next;
}node;

node *insert(int data);
void display(node *head);
node *head=NULL;
int main()
{
node *h=NULL;
h=insert(1);
insert(2);
insert(4);
insert(5);
display(h);

return 0;
}

node *insert(int data)

{
   node *temp=NULL;
   node *p=NULL;
   temp=(node*)malloc(sizeof(node));
   temp->data=data;
   temp->next=NULL;

if(head==NULL)
{
  head=temp;
  head->next=NULL;
}
else
{
  p=head;
  while(p->next!=NULL)
{
 p=p->next;

}
p->next=temp;
}
return head;
}
  

void display(node *head)
{
  node *p=head;
while(p->next!=NULL)
{
  printf("%d->",p->data);
 p=p->next;
}
printf("%d",p->data);
}
