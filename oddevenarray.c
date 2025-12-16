#include<stdio.h>
main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int i,even=0,odd=0;
	for(i=0;i<10;i++){
		printf("\n enter a[%d]",i);
		scanf("\n %d",&a[i]);
		if(a[i]%2==0){
			even++;
		}else{
			odd++;
		}
		
		
	}
	printf("\n total even=%d and odd=%d",even,odd);
		
		for(i=0;i<10;i++){
			printf("\n a[%d]=%d",i,a[i]);
		
	}
}
	

