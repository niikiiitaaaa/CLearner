#include <stdio.h>

int main()
{
    int i,j;
    int rows=6;
   
    for(i=1; i<=rows; i++)
	{
        for(j=1; j<=i*2;j++)
		{
            if(j%2==0)
            {
                printf("1");
            }
            else
			{
                printf("0");
            }
        }
        printf("\n");
    }
    
    return 0;
}
