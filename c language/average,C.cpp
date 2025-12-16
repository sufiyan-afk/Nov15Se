#include<stdio.h>

	float average(int a,int b,int c);//function prototype
	
	//function definition
	float average(int a,int b,int c){
		return (a + b +c ) / 3.0;
	
	int main(){
		int a=12,b=24,c=10;
		printf("\n average of three numbers is %f",average(a, b, c));
		return 0;
	}
	
}
