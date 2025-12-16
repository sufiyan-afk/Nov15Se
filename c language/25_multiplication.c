#include<stdio.h>
int main(){
	int num , i;
	printf("\n enter the number : ");
	scanf("\n %d",&num);
	
	for(i=1;i<=10;i++){
		printf("\n %d * %d = %d",num,i,num*i);
	}
}
