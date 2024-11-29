#include <stdio.h>
int main()
{
	int arr[]={10,20,30,40,50},i;
	int *ptr1=&arr[1];
	int *ptr2=&arr[4];

	{
		printf("address of ptr1 (arr[1]:%d\n",*ptr1);
		printf("address of ptr2 (arr[2]:%d\n",*ptr2);
	}
	 int diff=ptr2-ptr1;
	 {
		 printf("\ndifferent between ptr2 and ptr1:%d element\n",diff);
	 }
	 return 0;
}
