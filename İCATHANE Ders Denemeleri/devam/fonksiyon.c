#include <stdio.h>

void topla();
void cikar();

int main()
{

    topla();
    cikar();

    return 0;
}

void topla()
{
    int s1, s2; // s1 == sayı 1 demektir
    
    scanf("%i %i", &s1, &s2);

    printf("%i",s1 + s2);
    
}

void cikar()
{
    int s1, s2; // s1 == sayı 1 demektir
    
    scanf("%i %i", &s1, &s2);

    printf("%i",s1 - s2);
}

