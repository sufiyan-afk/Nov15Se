#include<stdio.h>
int main(){
	int i =1 ,even = 0,odd = 0;
	
	while(i <= 10){
		if(i %2 == 0)
			even = even+i;
		else
			odd=odd+i;
		i++;
	}
		printf("even sum = %d\n",even);
		printf("odd sum = %d\n",odd);
		
}
	

