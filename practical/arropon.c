#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
	if(argc<2)
	{
		printf("usage is: filname arg1 arg2 etc..\n");
		return 1;
	}
	if (strcmp (argv[0],"./a.out"))
	        printf("hello");
	else
	        printf("wlecome");


          printf("\n");
}	  
