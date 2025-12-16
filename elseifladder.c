#include<stdio.h>
int main(){
	char ch;
	
	printf("enter any character : ");
	scanf("%c",&ch);
	
	// check if it is an alphabet (a-z)(A-Z)
	
	if((ch >='a' &&  ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
		printf("'%c' is an alphabet \n",ch);
	}
	// check if it is a digit (0-9)
	
	else if(ch >= '0' && ch <= '9'){
		printf("'%c is a digit \n'",ch);
	}
	// if it is neither alphabet nor digit,then it is a special character
	
	else{
		printf("'%c' is a special character \n",ch);
	}
	return 0;
}
