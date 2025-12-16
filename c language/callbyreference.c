#include<stdio.h>
void swap(int *a,int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
main(){
	int a=10,b=20;
	swap(&a,&b);
	printf("\n after swapping a=%d and b=%d",a,b);
}
