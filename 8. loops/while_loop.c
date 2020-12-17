#include<stdio.h>

int main(){

    // print 10 times hello world
    int i=1;
    while(i<=10){
        printf("Hello World\n");
        i++;
    }

    // print numbers from 1 to 10
    int j=1;
    while(j<=10){
    	printf("%d\n", j);
    	j++;
	}

    // print numbers from 10 to 1
    int k=10;
    while(k>=1){
    	printf("%d\n", k);
    	k--;
	}

    // print even numbers from 1 to 10
    int x=2;
    while(x<=10){
    	printf("%d\n", x);
    	x=x+2;
	}

    // print odd numbers from 1 to 10
    
int y=1;
    while(y<=10){
    	printf("%d\n", y);
    	y=y+2;
    }
    	
    return 0;
}

