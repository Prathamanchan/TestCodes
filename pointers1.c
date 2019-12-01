#include<stdio.h>


int main()
{
int x=5;
int *p; //pointer to an integer
p=&x;
*p=1997;
int** q;  //pointer to a integer pointer
q=&p;
int*** r;
r=&q;

printf("%d\n",*p);
printf("%d\n",**q);
printf("%d\n",***r);

printf("%p\n",**r);
printf("%p\n\n",&x);

printf("%p\n",*r);
printf("%p\n\n",&p);

printf("%p\n",r);
printf("%p\n\n",&q);
return 0;
}
