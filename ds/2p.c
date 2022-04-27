#include<stdio.h>
#define S 6
int front=-1;
int rear=-1;
int q[S];
void enque(int ele)
{
if(rear==S-1)
{
printf("queue is full\n");
return;
}
else
{
if(front==-1)
front=0;
rear++;
q[rear]=ele;
}
}
void deque()
{
if(front==-1)
{
printf("queue is empty\n");
return;
}
else
{
printf("deleted ele is %d\n",q[front]);
front++;
}
}
void display()
{
if(rear==-1)
{
printf("queue is empty\n");
}
else
{
for(int i=front;i<rear;i++)
printf("%d\n",q[i]);
}
}
int main()
{
enque(10);
enque(20);
enque(30);
enque(40);
enque(50);
enque(60);
display();
deque();
display();
}
