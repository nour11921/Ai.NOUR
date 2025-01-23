#include<stdio.h>
void binary ( int n );
void main()
{
     int num ;
	 
	 printf("plese enter num:\n");
	 scanf("%d",&num);
	 binary(num);
	 printf("the num is  %d",num);
}

void binary ( int n )
{
	 if(n>0)
	 {
	binary(n/2);
    printf("%d",n%2);
	
	}
	
}