#include<stdio.h>

int lcm(int, int);  

int main()
{
   
    int a, b, LCM1;
    printf("\nINPUT FIRST NUMBER : \n");
    scanf("%d",&a);
    
     printf("\nINPUT SECOND NUMBER : \n");
    scanf("%d",&b);
    
    LCM1=lcm(a,b);   
    printf("\n\n LCM of %d and %d is: %d\n\n", a, b,LCM1);
    
    return 0;
}

int lcm(int a, int b) 
{
   
    static int tp = 1;    
    if(tp%a == 0 && tp%b == 0)
    {
        return tp;
    }
    else
    {
        tp++;
       lcm(a,b);
        return tp;
    }
}
