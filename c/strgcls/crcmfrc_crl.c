#include<stdio.h>
#define pi 3.14159

int main()
{
int r,a,c;
//const float pi=3.14159;
printf("enter the radius of the circle\n");
scanf("%d",&r);
a=pi*r*r;
printf("the area of the circle is %d\n",a);
c=2*pi*r;
printf("the circumference of the circle is %d\n",c);
return 0;
}
