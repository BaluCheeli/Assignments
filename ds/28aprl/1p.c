#include<stdio.h>
#include<stdlib.h>

void insert();
void display();

struct node{
int data;
struct node * link;
};


struct node * head;

int main()
{
int n;
while(1)
{
printf("\n1.insert\n2.display\n3.exit\n");
printf("enter your choice\n");
scanf("%d",&n);
switch(n)
{
	case 1:insert();
	       break;

	case 2:display();
	       break;

	default:exit(0);

}

}
return 0;
}

void insert()
{
struct node * temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&temp->data);
temp->link=NULL;

if(head==NULL)
{
head=temp;
}

else
{
struct node *p;
p=head;
while(p->link!=NULL)
{
p=p->link;
}
p->link=temp;
}

}

void display()
{
struct node * temp;
temp=head;
if(temp==NULL)
{
printf("list is empty\n");
}
	else
{
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}
}



}
