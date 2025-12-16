#include<stdio.h>
main(){
	int i,sum=0;
	for(i=20;i>=10;i--){
		printf("\n i=%d",i);
		if(i%2==0){sum=sum+i;
		}
	}
	printf("\n sum=%d",sum);
	}
