#include<stdio.h>
int main()
 {
  int c,i;
  int flag=0;  
  printf("Enter a no:  "); 
  scanf("%d",&c); //input
  if(c==0) //checking condidtion for zero
    printf("This is not a prime no.");
else
{
  
  for(i=2;i<=c/2;i++) //loop
  {
  	if(c%i==0)  //Condition
  	 flag=1;
  }
    if(flag==0)
      printf("This is a prime no.");
    else
	  printf("This is not a prime no.");  
    
   }
   return 0;
 }
 
