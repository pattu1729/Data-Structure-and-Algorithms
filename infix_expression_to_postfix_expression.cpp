#include<stdio.h> 
#include<string.h> 
char t[MAX];
int top=-1;
void push(char t[], char); 
char pop(char t[]);
void infixtopostfix(char source[], char target[]); 
int getpriority(char);
int main()
{

char infix[100],postfix[100]; 
printf("Enter infix expression-");
 

scanf("%s",infix);
strcpy(postfix,""); 
infixtopostfix(infix,postfix); 
printf("Postfix expression-"); 
printf("%s",postfix);
}

void infixtopostfix(char source[],char target[])
{

int i=0,j=0; char temp;
strcpy(target,"");
while(source[i]!='\0')
{

if(source[i]=='(')
{

push(t,source[i]); 
i++;
}

else if(source[i] == ')')
{

while(top!=-1 && t[top]!='(')
{
target[j]=pop(t);
 

j++;
}

if(top==-1)
{

printf("Invalid expression"); 
exit(1);
}

temp=pop(t); i++;
}
else if(isdigit(source[i]) || isalpha(source[i]))
{

target[j]=source[i]; j++;
i++;
}

else if(source[i]=='+' || source[i]=='-' || source[i]=='*' || source[i]=='/' || source[i]=='%')
{

while(top!=-1 && t[top]!='(' && getpriority(t[top])>getpriority(source[i]))
{

target[j]=pop(t); j++;
 

}
push(t,source[i]); i++;
}
else
{

printf("\nIncorrect element"); exit(1);
}
}
while(top!=-1 && t[top]!='(')
{

target[j]=pop(t); j++;
}
target[j]='\0';
}
int getpriority(char op)
{

if(op=='/' || op== '+' || op=='%') return 1;
else if (op=='+' || op=='-') return 0;
 

}
void push(char t[], char val)
{

if(top==MAX-1) printf("\nStack overflow");
else
{

top++; t[top]=val;
}
}

char pop(char t[])
{

char val=' '; if(top==-1)
printf("\nStack overflow"); else
{

val=t[top]; top--;
}
return val;
}

