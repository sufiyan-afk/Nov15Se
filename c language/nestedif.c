#include <stdio.h>
main(){
	int maths,phy,chem,total,subtotal;
	printf("\n enter maths phy and chem marks");
	scanf("%d %d %d" ,&maths,&phy,&chem);
	
	if(maths>65 && phy>=55 && chem>=50){
		total = maths+phy+chem;
		subtotal = maths + phy;
		
		if(total >190 || subtotal >145){
			printf("\n eligible");
			}
	else{
		printf("\n inner==>not eligible");
	}
}
    else{
	printf("\n outer==>not eligible");
}
}
