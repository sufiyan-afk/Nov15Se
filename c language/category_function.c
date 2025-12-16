#include<stdio.h>
// without return type without parameter
void display(){
	printf("\n hello world");
}
//without return type with parameter
void areaofrect(int l,int b){
	printf("\narea of rect=%d",(l*b));
}
//with return type without parameter
int squarefunction(){
	int num;
	printf("\n enter num");
	scanf("%d",&num);
	return (num*num);
}
//with return type with parameter
int add(int a,int b){
	int c;
	c=a+b;
	return c;
}
main(){
	display();
	areaofrect(12,3);
	printf("\n square =%d",square function());
	printf("\n addition =%d",add(100+200));
}
