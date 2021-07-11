#include <stdio.h>
#include <stdlib.h>
 
typedef struct
{
 
    char name[20];
    int empID;
    int age;
    int phoneno;
    int salary;
 
}
 Employee;
 
int main()
{
    int i, n=20;
 
    Employee employees[n];
 
    
 
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:- \n",i+1);
       
        printf("Employee Name: ");
        scanf("%s",employees[i].name);
       
        printf("Employee Id: ");
        scanf("%d",&employees[i].empID);
        
         printf("Employee Age: ");
        scanf("%d",&employees[i].age);
        
         printf("Employee Contact no. : ");
        scanf("%d",&employees[i].phoneno);
       
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }
 
   
 
    printf("-------------- All Employees Details ---------------\n");
 
    for(i=0; i<n; i++)
	{
 
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Id \t: ");
        printf("%d \n",employees[i].empID);
        
        printf("Age \t: ");
        printf("%d \n",employees[i].age);
        
        printf("Contact no.  \t: ");
        printf("%d \n",employees[i].phoneno);
 
        printf("Salary \t: ");
        printf("%d \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}
