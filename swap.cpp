// A program to swap two numbers
#include <stdio.h>

int swap(int x, int y);

int main(){
int a, b,s;
a=5;
b=6;
printf("The value of a and b before swap is %d %d\n",a,b);
swap(a ,b);
}
int swap(int a, int b ){
	int temp;
	temp = a;
	a=b;
	b=temp;
	printf("value of a and b after swap %d %d",a,b);
}
