#include<stdio.h>
#include <cstdlib>


struct node
{
int data;
struct node *next;
}*p;

addbeg(int num)
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
 temp->data=num;

if(p==NULL)
{
p=temp;
p->next=NULL;
}

else
{
temp->next=p; p=temp;
}
}

display(struct node *r)
{
r=p; 
if(r==NULL)
{
printf("NO ELEMENT IN THE LIST :");
return;
}
 
int main()
{
int i; p=NULL;
while(1)
{
printf("1.INSERT A NUMBER AT BEGINNING\n"); printf("ENTER YOUR CHOICE:");


switch(i)
{
case 1:
{
int num;
printf("ENTER THE NUMBER TO BE INSERTED :");
scanf("%d",&num); addbeg(num); break;
}
}
}

