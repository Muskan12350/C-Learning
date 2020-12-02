#include<stdio.h>

int main(){
    int a=2,b=3,c=2;
    int t,x,y,z;

    x= (b>a)&&(c>=a);
    y= (c>=a)||(b<a);
    t= (b<c)&&(c<a);
    z= !t;

    printf("%d, %d, %d, %d", ++x, y, t++, z--);

    return 0;
}
