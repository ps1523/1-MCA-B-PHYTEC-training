#include<stdio.h>
int main()
{
       int arr[5]={1,2,3,4,5},i;
       int *ptr =arr ;
      printf("arry element using pointer:\n");
      for ( i=0;i<5;i++);
      {
	      printf("element%d:%d\n",i,*(ptr + i));

      }
       *(ptr+2)=100;
       printf("\nmodified array:\n");
       for( i=0;i<5;i++)
       {
	       printf("arr[%d]:%d\n",i,arr[i]);
       }
       return 0;
}

