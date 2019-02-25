#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("it is alphabet");
    }
    else
    {
        printf("it is not alphabet");
    }
    return 0;
}
