#include<stdio.h>
struct cricket
{
    int wicket,run;
    char name[20];
}
player1[1000];

int main()
{
    int i,n;
    printf("Enter the no of cricket players\n");
    scanf("%d",&n);
    printf("Enter player details : name , runs scored , wickets taken\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d",player1[i].name,&player1[i].run,&player1[i].wicket);
    }
    printf("\nNAME\t\tRUNS\t\tWICKETS\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%d\t\t%d\n",player1[i].name,player1[i].run,player1[i].wicket);
    }
    return 0;
}
