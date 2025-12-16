#include<stdio.h>
main(){
	int a[4];
	int i;
	for(i=0;i<4;i++){
		printf("\n entera[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++){
		printf("\n a[%d]=%d",i,a[i]);
	}
}
