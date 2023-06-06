#include<stdio.h>
int main()
{
    char ch;
    printf("enter the number\n");
    scanf("%s", &ch);
    if(ch<=122 && ch>97)
    {
        printf("it is lowercase");
    }
    else
    {
        printf("it is not lowecase\n");
    }

}