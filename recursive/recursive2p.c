#include<stdio.h>
void fun(int);
int main()
{
        int x=15;
         fun(x);

         return 0;
}
void fun(int y)
{
        if(y<0)

                return 0;

        printf("%d  ",y);

        fun(y-1);
	printf("%d- ",y);  
}

