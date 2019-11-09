#include <stdio.h>
#include <math.h>

short pri[1009];
short sec[1009];
short ter[1009];

int main(){
	
	for(int i = 0; i < 1009; i++){
		float f = sin(3.14159 * 2 / 1319 * i);
		printf("%04d: %f\t%03d\n", i, f, (int)( (float)(f + 1.0) / 2 * 1024));
	}
	
	for(int i = 0; i < 1009; i++){
		float f = sin(3.14159 * 2 / 1319 * i * 2);
		printf("%04d: %f\t%03d\n", i, f, (int)( (float)(f + 1.0) / 2 * 512) + 256);
	}
	
	for(int i = 0; i < 1009; i++){
		float f = sin(3.14159 * 2 / 1319 * i * 3);
		printf("%04d: %f\t%03d\n", i, f, (int)( (float)(f + 1.0) / 2 * 256) + 384);
	}
	
	return 0;
}
