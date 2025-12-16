#include<stdio.h>
int factfind(int num){
	int f;
	if(num==1){
		return 1;
	}
	f=num*factfind(num-1);
	return f;
}
main(){
	printf("\n factorial=%d",factfind(5));
}
