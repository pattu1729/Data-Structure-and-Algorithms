#include<stdio.h> 
#include<stdlib.h> 
struct node
{

int data;
struct node *link;
};

struct node *root=NULL; int len;
void append(void); void addatbegin(void); void addatafter(void); void display(void);
int length(void);
void deletefunc(void); 
int main()
{
 

int ch; while(1)
{

printf("single linked list operations:\n"); printf("1.Append(add at end):\n"); printf("2.Add at begin:\n"); printf("3.Add at after:\n"); printf("4.Length:\n");
printf("5.Display:\n");
printf("6.Delete:\n");
printf("7.Exit:\n"); printf("Enter your choice:"); scanf("%d",&ch); switch(ch)
{

case 1: append();
break;
case 2: addatbegin();
break; case 3: addatafter();
break;
case 4: len=length();
printf("Length:%d\n",len);
 

break; case 5:	display();
break;
case 6:	deletefunc();
break; case 7:	exit(1);
break;
default: printf("invalid input:");
}
}
}

void append()
{

struct node *temp;
temp=(struct node *)malloc(sizeof(struct node)); printf("enter node data:");
scanf("%d",&temp-> data); temp->link=NULL; if(root==NULL)
{

root=temp;
}

else
 

{
struct node *p; p=root;
while(p->link!=NULL)
{

p=p->link;
}

p->link=temp;
}
}



int length()
{

struct node *temp; int count =0; temp=root; while(temp!=NULL)
{

count++; temp=temp->link;
}

return count;
}
 



void display()
{

struct node *temp; temp=root; if(temp==NULL)
{

printf("List is empty\n");
}

else
{

while(temp!=NULL)
{

printf("%d-->",temp->data); temp=temp->link;
}

printf("\n\n");
}
}



void addatbegin()
{

struct node *temp;
 

temp=(struct node*)malloc(sizeof(struct node)); printf("enter node data:");
scanf("%d",&temp->data); temp->link=NULL; if(root==NULL)
{

root=temp;
}

else
{

temp->link=root; root=temp;
}
}



void addatafter()
{

struct node *temp,*p; int loc,i=1,len;
printf("enter the location"); scanf("%d",&loc); len=length();
if(loc>len)
 

{
printf("invalid location");
}

else
{

p=root; while(i<loc)
{

p=p->link; i++;
}

temp=(struct node *)malloc(sizeof(struct node)); printf("enter node data:");
scanf("%d",&temp->data); temp->link=NULL; if(root==NULL)
{

root=temp;
}

else
{

temp->link=root; root=temp;
 



}

}
}



void deletefunc()
{

struct node *temp; 
int loc;
printf("enter the location:"); 
scanf("%d",&loc); 
len=length();
if(loc>len)
{

printf("invalid location");
}

else if(loc==1)
{

temp=root; root=temp->link; temp->link=NULL; free(temp);
 
}
else
{

struct node *temp,*p=root,*q; int i=1;
while(i<loc-1)
{

p=p->link; i++;
}

q=p->link;
p->link=q->link;
 q->link=NULL;
}
}

