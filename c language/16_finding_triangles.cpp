#include<stdio.h>
int main(){
	
	int a,b,c;
	printf("enter three sides of the triangle: ");
	scanf("%d %d %d",&a, &b, &c);
	
	// first check if its a valid triangle
	 if(a+b>c){
	 	if(a+c>b){
	 		if(b+c>a){
	 			//triangle is valid
	 			printf("valid triangle \n");
	 			
	 			//now check type of triangle using nested if
	 			
	 			if(a==b){
	 				if(b==c){
	 					printf("it is an equilateral triangle \n");
					 }else{
					 	printf("it is an isosceles triangle \n");
					 }
				 }
				 else if(b==c){
				 	printf("it is an isoscles triangle \n");
				 }
				 else if (a==c){
				 	printf("it is an isosceles triangle \n");
				 }
				 else{
				 	printf("it is a scalene triangle \n");
				 }
			 }
			 else{
			 	printf("invalid triangle \n");
			 }
		 }
		 else{
		 	printf("invalid triangle \n");
		 }
	 }
	 else{
	 	printf("invalid triangle \n");
	 }
	 return 0;
}
