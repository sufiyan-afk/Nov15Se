#include<stdio.h>
int main(){
	
	int age;
	printf("enter the age");
	scanf("%d",&age);
	
	// validate that the age is not negative
	if(age<0){
		printf("invalid age! age cannot be negative \n");
	}
	// age classification using else if
	
	if(age<=12){
		printf("the person is a child \n");
	}
	else if(age<=18){
		printf("the person is a teenager \n");
	}
	else if(age<=50){
		printf("the person is an adult \n");
	}
	else{
		printf("the person is senior \n");
	}
	return 0;
}

