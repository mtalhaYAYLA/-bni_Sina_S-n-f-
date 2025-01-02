#include <stdio.h>

int main(void)
{
    int sayı1 ,                        sayı2 ;

    printf("1. sayıyı giriniz: %i", sayı1);
    scanf("%d", &sayı1 );
    printf("2. sayıyı giriniz: ");
    scanf("%d", &sayı2 );

    if(sayı1 > sayı2)
    {
        printf("1. sayı 2. sayıdan büyüktür\n");
    }
    else if(sayı1 < sayı2)
    {
        printf("1. sayı 2. sayıdan küçüktür\n");
    }
    else
    {
        printf("1. sayı 2. sayıya eşittir\n");
    }
    printf("%p", &sayı1);

    return 0;
}