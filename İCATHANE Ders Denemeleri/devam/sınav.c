// fonksiyonlaral 5 işlem yapan bir program yazınız.

#include <stdio.h>

int topla();
int cikar();
int carp();
int bol();
int mod();

int main()
{
    int a = topla();
    int b = cikar();
    int c = carp();
    int d = bol();
    int e = mod(); 

    

    return 0;
}

int topla()
{
    int s1, s2; // s1 == sayı 1 demektir
    
    scanf("%i %i", &s1, &s2);

    printf("%i\n",s1 + s2);

    return s1 + s2;
    
}

int  cikar()
{
    int s1, s2; // s1 == sayı 1 demektir
    
    scanf("%i %i", &s1, &s2);

    printf("%i\n",s1 - s2);
}

int carp()
{
    int s1, s2; // s1 == sayı 1 demektir
    
    scanf("%i %i", &s1, &s2);

    printf("%i\n",s1 * s2);
}

int bol()
{
    int s1, s2; // s1 == sayı 1 demektir
    
    scanf("%i %i", &s1, &s2);

    printf("%i\n",s1 / s2);
}

int mod()
{
    int s1, s2; // s1 == sayı 1 demektir
    
    scanf("%i %i", &s1, &s2);

    printf("%i\n",s1 % s2);
}

// Output:
// 5 3  -> toplama işlemi
// 8 
// 5 3 -> çıkarma işlemi
// 2
// 5 3 -> çarpma işlemi
// 15
// 5 3 -> bölme işlemi
// 1
// 5 3 -> mod alma işlemi
// 2
