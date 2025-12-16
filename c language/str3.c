#include<stdio.h>
main(){
	char str[20],rev[20];
	int i=0,j=0;
	printf("\n enter string: ");//tops
	scanf("%s",str);
	
	printf("\n str=%s",str);
	while(str[i]!= '\0'){
		//printf("\n ch=%c",str[i]);
		i++;
		//printf("\t counter=%d",i);
	}
	printf("\n len if str=%d",i);
	i--;
	printf("\n rev tr task=====\n");
	while(i>0){
		
		//printf("\n ch=%c",str[i]);
		rev[j]=str[i];
		//printf(" \t rev=%c",rev[j]);
		i--;
		j++;
	}
	rev[j]='\0';
	printf("\n rev str=%s",rev);
}
