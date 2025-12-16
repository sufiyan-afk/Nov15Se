#include<stdio.h>
int main(){
	float temperature;
	printf("enter the temperature(in celsius): ");
	scanf("%f",&temperature);
	
	/* check temp using else if ladder
	c-1  if temp is <0  frezzing cold
	c-2  if temp is (0-20) cold
	c-3  if temp is (20-30) warm
	c-4  if temp is (30-38) hot
	c-5  if temp is >38 very hot
	*/
	
	if(temperature <=0){
		printf("freezing cold ! ( below 0°) \n");
	}
	else if((temperature>=0) && (temperature <= 20)){
		printf("the temperature is cold\n");
	}
	else if((temperature >=20) && (temperature <=30)){
		printf("the temperature is warm\n");
	}
	else if ((temperature >30) && (temperature <= 38)){
		printf("the temperature is hot \n");
	}
	else if(temperature >=38){
		printf("the temperature is very hot \n");
	}
	return 0;
}
