#include <stdio.h> // standart giriş çıkış kütüphanesi

int main() // programın başladığı yer
{
   //2 değişken alıp toplayan kod scanf ile
    int sayi1, sayi2, toplam;
    printf("1. sayiyi giriniz: ");
    scanf("%d", &sayi1);
    printf("2. sayiyi giriniz: ");
    scanf("%d", &sayi2);
    toplam = sayi1 + sayi2;
    printf("Toplam: %d\n", toplam);

    return 0;
}


