#include<stdio.h>
int sum(int a)
{
    if (a==0)
       return 0;
    return (a % 10 + sum(a / 10));
}
 

int main()
{
    int num = 0;
    printf("Input Number ");
    scanf("%d",&num);
    int result = sum(num);
    printf("Sum of digits : %d\n", result);
    return 0;
}
