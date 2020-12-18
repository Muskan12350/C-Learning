#include<stdio.h>

int main(){

    // print 10 times hello world
    int i=1;
    do{
    	printf("Hello World\n");
    	i++;
    }while(i<=10);


    // print numbers from 1 to 10
    int j=1;
    do{
    	printf("%d\n", j);
    	j++;
    	}while(j<=10);

    // print numbers from 10 to 1
    int k=10;
    do{
    	printf("%d\n", k);
    	k--;
	}while(k>=1);


    // print even numbers from 1 to 10
    int x=2;
    do{
    	printf("%d\n", x);
    	x=x+2;
	}while(x<=10);

    // print odd numbers from 1 to 10
    
int y=1;
	do{
		printf("%d\n", y);
    	y=y+2;
	}while(y<=10);
    
    	
    return 0;
}
