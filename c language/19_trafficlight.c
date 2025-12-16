#include<stdio.h>
int main(){
	
	int choice;
	
	printf("traffic light meaning \n");
	printf("===================== \n");
	printf("1.red light \n");
	printf("2.yellow light \n");
	printf("3.green light \n");
	printf("enter your choice (1-3) \n");
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1:
			printf("\n red light : stop \n");
			printf("\n it is not safe to cross \n");
			break;
			
		case 2:
		    printf("\n yellow light :caution \n");
			printf("\n prepare to go if green appears \n");
			break;
			
		case 3:
		    printf("\n green light : Go \n");
			printf("\n now its safe to proceed \n");
			break;
			
		case 4:
		    printf("\n invalid choice ! please enter 1, 2, 3 \n");
			break;	
	}
	return;
}
