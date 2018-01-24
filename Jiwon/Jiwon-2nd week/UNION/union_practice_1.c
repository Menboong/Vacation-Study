#include<stdio.h>

union byte{
	float i;
	char b[4];
};

int main(void){
	int z;
	union byte data;
	data.i=3.14;
	
	for(z=0; z<4; z++)
	{
		printf("%x\n",data.b[z]);	
	}
}

