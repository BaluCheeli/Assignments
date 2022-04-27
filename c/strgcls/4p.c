#include<stdio.h>
int b=6;           //extern
static int d=8     //global static
register int f=3;
int main()
{
int a=2;           //auto
static int c=4;    //local static 
register int e=10; //register
printf("it is auto %d\n",a);
printf("it is extern %d",b);
printf("it is local static %d",c);
printf("it is global static %d",d);
printf("it is register %d",e);

me();
return 0;
}
void me()
{
printf("it is auto %d",a);          //we cannot access the local auto through another fn
printf("in the extern %d",b);
printf("it is local static %d",c); //we cannot access the local static through another fn
printf("it is global static %d",d);
printf("it is register %d",e);     //we cannot access register through another fn 
}
