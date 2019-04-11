#include <stdio.h>
#include <stdlib.h>

int plus(int a,int b) {return a + b;}
int minus(int a,int b) {return a - b;}
int multiply(int a,int b) {return a * b;}
int divided(int a,int b) {return a / b;}
int main()
{

int a,c;
char b;
printf("key a function");
scant("%i %c %i", &a, &b, &c);

if(b == '+')
printf("%d %c %d = %d\n",a,b,c,plus(a,c));
else if (b == '-')
printf("%d %c %d = %d\n",a,b,c,minus(a,c));
else if (b == '*')
printf("%d %c %d = %d\n",a,b,c,multiply(a,c));
else if (b == '/')
prints("%d %c %d = %d\n",a,b,c,divided(a,c));

}
