#include<stdio.h>

char capital_to_small(char x)
{
    char n = x+('a'-'A');
    return n;
}

char small_to_capital(char x)
{
    char n = x-('a'-'A');
    return n;
}

int char_to_ascii(char x) 
{
    int n = x;

    return n;
}

int main()
{
    char a,b,c;
    scanf(" %c",&a);
    scanf(" %c",&b);
    scanf(" %c",&c);

    int i = char_to_ascii(a);
    char j = small_to_capital(b);
    char k = capital_to_small(c);

    printf("%d %c %c\n",i,j,k);
    return 0;
}