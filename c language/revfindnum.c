#include<stdio.h>
int revnumfind(int num){
	int rem;
	static int rev=0;
	if(num==0){
		return 0;
	}
	rem=num%10;
	rev= rev*10+rem;
	printf("\n rev=%d",rev);
	revnumfind(num/10);
	return rev;
}
main(){
	printf("\n revnum=%d",revnumfind(1234));
}
