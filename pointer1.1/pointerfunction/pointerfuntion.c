#include<stdio.h>
void greet()
{
	printf("hello world!\n");
}
int main()
{
	void(*func_ptr)();
	func_ptr=greet;
	func_ptr();
	printf("%d\n",(void*)func_ptr);
                printf("adress of num:%p\n",(void*)func_ptr);
                printf("value of ptr:%p\n",*func_ptr);
                printf("dereferenced value :%p\n",func_ptr);

	return 0;
}

