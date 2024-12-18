#include<stdio.h>
void fun()
	int main();
{
	int a,b=0;
	printf("enter a number of elements:");
	scanf("%d/t",&a);
	fun(a,b);
	return 0;
}
void fun(int a, int b);
{
	if (a>b)
	{
		printf("%d/t",b);
		fun(a,b+1);
	}
	else
		return 0;
