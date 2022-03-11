#include<stdio.h> 
#include<stdlib.h> 
struct node
{

int data;
struct node *next;
}

*head='\0',*newnode,*temp; void print();
int main()
{

int i,j,n;
printf("Enter the number of elements-: "); scanf("%d",&n);
for(i=1;i<=n;i++)
{
newnode=(struct node*)malloc(sizeof(struct node)); printf("Enter the element %d : ",i); scanf("%d",&newnode->data);
newnode->next='\0'; if(head=='\0')
{
 

head=temp=newnode;
}

else
{

temp->next=newnode; temp=newnode; temp=newnode;
}
}

print();
newnode=(struct node*)malloc(sizeof(struct node)); printf("Enter the elements to be inserted : "); scanf("%d",&newnode->data);
temp=head; for(i=1;i<1;i++)
{

temp=temp->next;
}

newnode->next=temp->next; temp->next=newnode; print();
}
void print()
 

{
temp=head;
printf("The elements in the list-\n"); while(temp!='\0')
{
printf("%d\n",temp->data); temp=temp->next;
}
}

