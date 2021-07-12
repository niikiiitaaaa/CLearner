#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char ch, filename[30], newchr[100];
    int i=0, j, count=0;
   
    fp = fopen("hemlo.txt", "r");
    if(!fp)
    {
        printf("Error in opening the file...\nExiting...");
        getch();
        return 0;
    }
    printf("\nThe original content is : \n");
    ch = getc(fp);
    while(ch != EOF)
    {
        count++;
        putchar(ch);
        newchr[i] = ch;
        i++;
        ch = getc(fp);
    }
    printf("\n\n");
    printf("The content in reverse order is:\n");
    for(j=(count-1); j>=0; j--)
    {
        ch = newchr[j];
        printf("%c", ch);
    }
    printf("\n");
    getch();
    return 0;
}
