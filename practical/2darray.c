#include<stdio.h>
int main()
{
	int  a[3][3]={12,21,22,15,06,78};
	{
		printf("%p\n",*(*(a+0)+0));
		printf("%p\n",*(*(a+0)+1));
                printf("%p\n",*(*(a+0)+2));
                printf("%p\n",*(*(a+1)+0));
                printf("%p\n",*(*(a+1)+1));
               printf("%p\n",*(*(a+1)+2));
	}
}
              		

