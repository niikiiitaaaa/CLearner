#include<stdio.h>
int main()
{
	int marks=0;
	printf("Enter Marks");
	scanf("%d",&marks);
	
	if(marks<=100 && marks>=85)
	printf("GRADE A");
	
	else if(marks<=84 && marks>=70)
	printf("GRADE B");
	
	else if(marks<=69 && marks>=55)
	printf("GRADE C");
	
	else if(marks<=54 && marks>=40)
	printf("GRADE D");
	
	else 
	printf("GRADE F");

return 0;
				
				
    
	
}
