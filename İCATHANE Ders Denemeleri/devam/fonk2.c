#include <stdio.h>

int topla();
int cikar();

int main()
{

   int a = topla();
    cikar();

    return 0;
}

int topla()
{
    int s1, s2; // s1 == sayı 1 demektir
    
    scanf("%i %i", &s1, &s2);

    //printf("%i",s1 + s2);

    return s1 + s2;
    
}

int  cikar()
{
    int s1, s2; // s1 == sayı 1 demektir
    
    scanf("%i %i", &s1, &s2);

    printf("%i",s1 - s2);
}

