#include<stdio.h>
int main(){
	// find total cost of items in currency
	int items=15;
	float cost_per_item=7.2;
	float total_cost = items * cost_per_item;
	char currency='$';
	
	// print variables
	
	printf("number of items,%d\n",items);
	printf("cost per items,%f %c\n",cost_per_item,currency);
	printf("total cost,%f %c\n",total_cost,currency);
	
	return 0;
}
