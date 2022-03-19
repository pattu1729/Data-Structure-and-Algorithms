#include<stdio.h> 
int a[100];
int top=-1;
void Push(int x)
{

if(top==100)
{

printf("stack overflow\n"); 
return;
}

a[++top]=x;
}

void Pop()
{

if(top==-1)
{

printf("no elements\n"); return;
}

top--;
}

int Top()
 

{
return a[top];
}

void print()
{

int i; printf("Stack:"); for(i=0;i<=top;i++)
printf("%d ",a[i]); printf("\n");
}

int main()
{

Push(2);print();
Push(5);print();
Push(10);print();
Pop();print();
Push(16);print();
}


