#include<stdio.h>
int main()
{
int a,b;
printf("enter the a & b values\n");
scanf("%d%d",&a,&b);
printf("sum is %d\n",a+b);
printf("diff is %d\n",a-b);
printf("prod is %d\n",a*b);
printf("quo is %d\n",a/b);
if(a>b)
printf("%d is big \n",a);
printf("%d is big\n",b);
printf("%d\n",a++);
printf("%d\n",b++);
if(a==b)
	printf("%d=%d",a,b);
a=a>>3;
printf("%d\n",a);
b=b<<4;
printf("%d\n",b);

return 0;
}
