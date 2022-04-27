#include<stdio.h>
#define SIZE 5
int stack[SIZE];
int top=-1;
void push(int ele)
{
if(top==SIZE-1)
{
printf("stack is full\n");
return;
}
else
{
top++;
stack[top]=ele;
}
}
void pop()
{
if(top==-1)
{
printf("stck is empty\n");
return;
}
else
{
printf("poped ele %d\n",stack[top]);
top--;
}
}
void display()
{
if(top==-1)
{
printf("stack is empty\n");
return;
}
int i;
for(i=0;i<top;i++)
printf("%d\n",stack[i]);
}
int main()
{
push(10);
push(20);
push(30);
push(40);
push(50);
display();
pop();
pop();
pop();
pop();

display();
}
