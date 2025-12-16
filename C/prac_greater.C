#include<stdio.h>
int main(){
	
	int num1,num2;
	
	printf("enter the first num : ");
	scanf("%d",&num1);
	
	printf("enter the second num : ");
	scanf("%d",&num2);
	
	if(num1>num2){
		printf("%d is greater than %d\n",num1,num2);
	}
	else if (num2>num1){
		printf("%d is greater than %d\n",num2,num1);
	}
	else{
		printf("both are same : %d = %d\n");
	}
	return 0;
}
