#include<stdio.h>
#include<string.h>
#define N 50
void push(char item);
char pop();
int top=-1;
char stack[N];
void main()
{
 int i,len;
 char str[43];
 printf("enter the string\n");
scanf("%[^\n]s",str);
 len=strlen(str);
 for(i=0;i<len;i++)
 {
  push(str[i]);
 }
 for(i=0;i<len;i++)
 {
  str[i]=pop();
 }
 printf("reversed string is:\n");
 puts(str);
}
void  push(char item)
{
 if(top==N-1)
 {
  printf("stack is overflow");
 }
 else
 {
  top++;
  stack[top]=item;
  
 }
}
char pop()
{
if(top==-1)
 {
  printf("stack is underflow");
 }
 else
 {
 return stack[top--];
   }
}
