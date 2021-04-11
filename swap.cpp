// A program to swap two numbers
#include <stdio.h>

int main(){
int a, b,temp;
a=5;
b=6;
printf("The value of a and b before swap is %d %d\n",a,b);
temp = a;
a=b;
b= temp;
printf("The value of and and b after swap is %d %d\n",a,b);
}
