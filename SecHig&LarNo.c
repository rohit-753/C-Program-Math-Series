
#include <stdio.h>

 int main()
{
	int arr[50], i, Size;
	int first, second,minimum, c, location;
	
	printf("\n Please Enter the Number of elements in an array  :  ");
	scanf("%d", &Size);
	
	printf("\n Please Enter %d elements of an Array \n", Size);
	for (i = 0 ;i < Size; i++)
	{
		scanf("%d", &arr[i]);
	
    }
	 
	if(arr[0]>arr[1])
	{
		 first=arr[0];
		 second=arr[1];
	}
	else
    {
    	first=arr[1];
    	second=arr[0];
	}
	   
	for (i = 2; i < Size; i++)
	{
		if(arr[i] > first)
		{
			second = first;
			first = arr[i];
		}
		else if(arr[i] > second)
		{
			second = arr[i];
		}	
	}
	printf("\n The Largest Number in this Array =  %d", first);
	printf("\n The Second Largest Number in this Array =  %d", second);
	
	return 0;
}
