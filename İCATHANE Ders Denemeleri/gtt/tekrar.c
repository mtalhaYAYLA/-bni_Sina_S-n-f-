#include "merhaba.h"


int main()
{
    değişken türü   değişkenin ismi   = değeri;

    int             sayı              = 16; // 4 byte yer kaplar ve -2,147,483,648 ile 2,147,483,647 arasında değer alır
    char            karakter          = 'a'; // 1 byte yer kaplar ve -128 ile 127 arasında değer alır
    float           ondalıklı         = 3.14; // 4 byte yer kaplar ve 1.2E-38 ile 3.4E+38 arasında değer alır
    double          ondalıklı2        = 3.14; // 8 byte yer kaplar ve 2.3E-308 ile 1.7E+308 arasında değer alır
    long            büyük_tam_sayı    = 1234567890; // 4 byte yer kaplar ve -2,147,483,648 ile 2,147,483,647 arasında değer alır
    short           küçük_tam_sayı    = 1234; // 2 byte yer kaplar ve -32,768 ile 32,767 arasında değer alır
    unsigned int    pozitif_tam_sayı  = 1234; // 4 byte yer kaplar ve 0 ile 4,294,967,295 arasında değer alır
    long long int  çok_büyük_tam_sayı = 1234567890123456789; // 8 byte yer kaplar ve -9,223,372,036,854,775,808 ile 9,223,372,036,854,775,807 arasında değer alır
    printf("%d\n", sayı);

    int a;
    printf("%c\n", karakter);
    printf("%f\n", ondalıklı);
    printf("%lf\n", ondalıklı2);
    printf("%ld\n", büyük_tam_sayı);
    printf("%hd\n", küçük_tam_sayı);
    printf("%u\n", pozitif_tam_sayı);

}


// değişken kısa isimleri %d gibi

// %d -> int
// %c -> char
// %f -> float
// %lf -> double
// %ld -> long
// %u -> unsigned int
// %lld -> long long int
// %lu -> unsigned long
// %hu -> unsigned short
// %c -> char
// %s -> string
// %p -> pointer
// %x -> hexadecimal
// %o -> octal
// %e -> scientific notation
// %g -> float or double in %f or %e form
// %i -> int