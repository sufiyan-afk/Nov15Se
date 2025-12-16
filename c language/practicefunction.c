#include<stdio.h>
float areaofcircle(float r);
int main(){
	float ans;
	ans=areaofcircle(3.8);
	printf("\n ans=%f",ans);
	return 0;
}
float areaofcircle(float r){
	float aoc;
float pi=3.14;
aoc=pi*r*r;
	return aoc;
}
