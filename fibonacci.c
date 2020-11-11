//fabonacci
#include<stdio.h>
int main()
{
	 int n,c,i;
     int a=0,b=1;
	 printf("Enter a No:");
	 scanf("%d",&n);
	 
	 if(n<=0)
	 printf("invalid input");
	  
	  else
	 {
	 	for(i=0;i<n;i++)
	 	{
	 		if(i==0)
	 		{
	 			printf("%d\t",i);
			}
			else
			{
				c=a+b;
	 			printf("%d\t",c);
	 			b=a;
	 			a=c;
			}
		 }
		 printf("\n");
		 printf("The %d th fibonacci no is %d",n,c);
	 }
	 return 0;
}
