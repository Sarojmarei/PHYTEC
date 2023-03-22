#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character to check\n");
    scanf("%c",&ch);
    int lowercase=(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u');
    int uppercase=(ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U');
    if (lowercase || uppercase)
    {
        printf("%c is a vowel\n",ch);
    }
    else{
        printf("%c is a constant\n",ch);
    }
}