#include<stdio.h>
main(){
	int a[2][2],b[2][2],c[2][2];
	int i,j;
	printf("\n enter array elements");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n entera[%d][%d]",i,j);
			scanf("\n %d",&a[i][j]);
		}
	}
	printf("\n enter the array elements");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n enter b[%d][%d]",i,j);
			scanf("%d",b[i][j]);
		}
	}
	//addition of matrix
	printf("\n array elements \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n array elements \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t a[%d][%d]=%d",i,j,a[i][j]);
		}
		
	}
	printf("\n array elements \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t c[%d][%d]=%d",i,j,c[i][j]);
		}
		printf("\n");
	}
}
