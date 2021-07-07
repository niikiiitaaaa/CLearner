#include <stdio.h>
 int prime(int, int);
 int main()
{
    int num, ck;
    printf("Enter a number: ");
    scanf("%d", &num);
    ck = prime(num, num / 2);
    if (ck == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
 
int prime(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return prime(num, i - 1);
       }       
    }
}
