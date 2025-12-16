#include<stdio.h>
	void display();//function declaration
	int add(int a,int b);
	main(){
		int ans;
		display();//calling
		ans=add(100,200);
		printf("\n ans=%d",ans);
	}
	
	void display(){//function defination
	   printf("\n hello world");
	}
	
	int add(int a,int b){
		int c;
		c=a+b;
		return c;
	}
