#include<stdio.h>
float pi= 3.14;//global variable
void testfunction(){
	printf("\n in function pi=%f",pi);
}
void add(int a,int b){//formal parameter
    printf("\n addition of %d and %d =%d",a,b,a+b);
}
main(){
	{
		int x=10;//local scope example
		printf("\n x=%d",x);
		printf("\n in local block pi=%f",pi);
	}
	testfunction();
	add(100,200);
	//printf("\n a=%d",a);=>error generate scope : formal parameter
	printf("\n main function pi=%f",pi);
}


