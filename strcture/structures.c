#include<stdio.h>
#include<stdint.h>

struct car
{
	int a;
	float b;
        char *ptr;
};
int main(void)
{
	struct car bmw={12,15.000,"hello"};
	printf("%d\n%f\n%s\n", bmw.a,bmw.b,bmw.ptr);

	return 0;
}
		
