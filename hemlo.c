#include<stdio.h>
int main()
{
    int a = 55;
	int b = 25;
 
    /* to swap 'a' and 'b'*/
    a = a + b; /* a now becomes 80*/
    b = a - b; /* b becomes 55*/
    a = a - b; /* a becomes 25*/
 
    printf("After Swapping: a = %d, b = %d", a, b);
 
    return 0;
}
