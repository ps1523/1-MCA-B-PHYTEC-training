#include<stdio.h>
void add();
void main()
{
	int a=23;
	int b=23;
	int c=a+b;
	printf("%d\n",c);
}
void add()
{
	add();
		return 0;
}


