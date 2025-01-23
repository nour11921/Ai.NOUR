#include<stdio.h>
void main()
{  
  int size,i,n,h=0,pos;
  int arr[100];
  int*ptr=arr;
   printf("the size of arr is:");
   scanf("%d",&size);
   printf("the arr of arr is:");
    for(i=0;i<size;i++)
   {
	   scanf("%d",&arr[i]);
	  
   }
   printf("the num of arr  search is:");
   scanf("%d",&n);
   for(i=0;i<size;i++)
   {
	   if(n==*(ptr+i))
	   {
		 h++;
 		 pos=i;
	   }
	
    
	
   }
  
	if(h>0)
	{
		
	printf("the num of arr  search is located");
	printf("the num of arr  search is%d:",pos);
	}
	
	else
	{
		printf("the num of arr  search is not locat:");
		
	}

	

	
	
}









