#include<stdio.h>

void good_morning();
void good_afternoon();
void good_evening();

void good_morning(){
	printf("\n good morning");
}
void good_afternoon(){
	printf("\n good afternoon");
}
void good_evening(){
	printf("\n good evening");
}
int main(){
	good_morning();
	good_afternoon();
	good_evening();
	return 0;
}
