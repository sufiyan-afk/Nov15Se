#include<stdio.h>
int main (){
	int num;
	printf("enter a number : ");
	scanf("%d",&num);
	
	// nested if : first check divisibility by 3 and then by 5
	
	if(num %3 == 0){
		if(num %5 == 0){
			printf("%d is divisible by both 3 and 5\n",num);
		}
		else{
			printf("%d is divisible by 3 but not divisible by 5\n",num);
		}
    }
		else{
			printf("%d is not divisible by 3\n",num);
		}
		
		return 0;
	 
}
