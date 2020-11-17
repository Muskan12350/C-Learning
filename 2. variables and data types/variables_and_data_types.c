#include <stdio.h>

int main(){

	char a ='G';
	int b = 1;
	float c = 1.4;
	double d = 3.14;

	// printing the variables defined above along with their sizes
	printf("Hello! I am a character. My value is %c and my size is %d byte.\n", a,sizeof(char));

	printf("Hello! I am an integer. My value is %d and my size is %d bytes.\n", b,sizeof(int));

	printf("Hello! I am a floating point variable. My value is %f and my size is %d bytes.\n",c,sizeof(double));

	printf("Hello! I am a double floating point variable. My value is %lf and my size is %d bytes.\n",d,sizeof(double));

	printf("Bye! See you soon. :)\n");

	return 0;
}
