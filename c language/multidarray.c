#include<stdio.h>
 main(){
 	int row,coln;
 	int i,j;
 	printf("\n enter row");
 	scanf("\n %d",&row);
 	
 	printf("\n enter the column");
 	scanf("\n%d",&coln);
 	
 	int a[row][coln];
 	printf("\n enter array elements");
 	
 	
 	
 	for(i=0;i<row;i++){
 		for(j=0;j<coln;j++){
 			printf("\n enter a[%d][%d]",i,j);
 			scanf("%d",&a[i][j]);
		 }
	 }
	 printf("\n array elements \n");
	 for(i=0;i<row;i++){
	 	for(j=0;j<coln;j++){
	 		printf("\t a[%d][%d]=%d",i,j,a[i][j]);
		 }
		 printf("\n");
	 }
	
}
