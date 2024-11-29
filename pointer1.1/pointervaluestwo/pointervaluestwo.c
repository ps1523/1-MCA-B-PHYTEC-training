#include<stdio.h>
int main()
{

        int num ,*a= &num , *b= &num, **c= &b;
        printf("enter a values");
        scanf("%d",&num);
        int*ptr=&num;
        {
                printf("value of num:%d\n",num);
                printf("adress of num:%p\n",&num);
                printf("value of ptr:%p\n",ptr);
                printf("dereferenced value :%d\n",*ptr);
		printf("%d\n",**c);
        }
        return 0;
}                
