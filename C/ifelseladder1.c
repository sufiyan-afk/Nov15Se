#include<stdio.h>
int main(){
	int marks;
	printf("\n enter the marks");
	scanf("%d",&marks);
	
	if(marks>=90){
		printf("grade 'A'");
	}
	else if(marks>=75){
		printf("grade 'B'");
	}
	else if(marks>=60){
		printf("grade 'C'");
	}else{
		printf("grade 'D'");
	}
}
