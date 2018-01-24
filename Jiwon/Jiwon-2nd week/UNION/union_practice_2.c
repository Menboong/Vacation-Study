#include<stdio.h>

union Data{
	char data[4];
	float sum;
};
int main(void){
	union Data number;
	
	number.data[0]=0xffffffc3; 
	number.data[1]=0xfffffff5;
	number.data[2]=0x48;
	number.data[3]=0x40;

	printf("%.2lf",number.sum);
}
