#include<stdio.h>
void main()
{
	
	int side,length,width;
	printf("\n enter the length of a side of square :  ");
	scanf("%d",&side);
	
	printf("\n enter the length of the side of rectangle : ");
	scanf("%d %d" ,&length,&width);
	
	printf("\n area of square :- %d",side*side);
	printf("\n area of rectangle :- %d",length*width);
	
}  
