#include<stdio.h>
int main (){
	
	int i, num1=0, num2=0, add=0;
	
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	
	
	for (i=1; i<=num2; i++){
		add=add+num1;
		
	}
	printf("Multiplication of %d and %d is %d",num1, num2, add);
		
	return 0;

}
	
	
	
