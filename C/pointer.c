#include<stdio.h>
int main(){
	int age=22;
	int *ptr = &age;
	int num = *ptr;

	printf("%p",num);
}
