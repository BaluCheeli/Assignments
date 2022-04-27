#include<stdio.h>

int main()
{
int a;
unsigned int aa;
float b;
char c;
unsigned char cc;
long int d;
unsigned long dd;
short int e;
unsigned short int ee;

printf("size of char is %u\n",sizeof(c));
printf("size of int is %u\n",sizeof(a));
printf("size of float is %u\n",sizeof(b));
printf("size of double is %u\n",sizeof(d));
printf("size of short int is %u\n",sizeof(e));
printf("size of unsigned int is %lu\n",sizeof(aa));
printf("size of unsigned char is %lu\n",sizeof(cc));
printf("size of unsigned long is %lu\n",sizeof(dd));
printf("size of unsigned short int is %lu\n",sizeof(ee));
return 0;
}
