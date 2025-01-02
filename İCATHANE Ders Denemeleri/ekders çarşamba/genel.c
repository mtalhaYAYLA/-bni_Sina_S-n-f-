// c dilinde fonksiyonları anlamak için bana yardımcı olur musunuz? örneklrle anlatırsanız sevinirim.

#include <stdio.h>




// Fonksiyon tanımlama
void fonksiyonAdi(int parametre1, int parametre2) {
    // Fonksiyon içeriği
    printf("Fonksiyon çalıştı\n");
    printf("Parametre 1: %d\n", parametre1);
    printf("Parametre 2: %d\n", parametre2);
}

int main() {
    // Fonksiyon çağırma
    fonksiyonAdi(5, 10);
    return 0;
}

// Fonksiyon çalıştı
// Parametre 1: 5
// Parametre 2: 10

// Fonksiyonlar, programın belirli bir işlevi yerine getirmesini sağlayan kod bloklarıdır. Fonksiyonlar, programın farklı yerlerinde tekrar tekrar kullanılabilen kod parçalarını gruplamak ve kodun daha okunabilir ve yönetilebilir olmasını sağlamak için kullanılır.

// Yukarıdaki örnekte, "fonksiyonAdi" adında bir fonksiyon tanımlanmıştır. Bu fonksiyon, iki tane "int" türünde parametre almakta ve bu parametreleri ekrana yazdırmaktadır. "main" fonksiyonu içinde "fonksiyonAdi" fonksiyonu çağrılmış ve parametre olarak 5 ve 10 değerleri verilmiştir. Bu durumda, program çalıştığında "Fonksiyon çalıştı", "Parametre 1: 5" ve "Parametre 2: 10" mesajları ekrana yazdırılacaktır.

// Fonksiyon tanımlama:
// void fonksiyonAdi(int parametre1, int parametre2) {

// Fonksiyon içeriği:
//     printf("Fonksiyon çalıştı\n");
//     printf("Parametre 1: %d\n", parametre1);
//     printf("Parametre 2: %d\n", parametre2);
// }

// Fonksiyon çağırma:
// fonksiyonAdi(5, 10);

// Çıktı:
// Fonksiyon çalıştı
// Parametre 1: 5
// Parametre 2: 10


// örnekler ver
// 1. Toplama fonksiyonu
#include <stdio.h>

int toplama(int sayi1, int sayi2) {
    return sayi1 + sayi2;
}

int main() {
    int sonuc = toplama(5, 10);
    printf("Toplam: %d\n", sonuc);
    return 0;
}

// Çıktı:
// Toplam: 15



#include <stdio.h>

void fonksiyon1() {
    printf("Fonksiyon 1\n");
}

void fonksiyon2() {
    printf("Fonksiyon 2\n");
    fonksiyon1();
}

int main() {
    fonksiyon2();
    return 0;
}

// return lü olsun

// Çıktı:
// Fonksiyon 2
// Fonksiyon 1


// Fonksiyonlar, programın belirli bir işlevi yerine getirmesini sağlayan kod bloklarıdır. Fonksiyonlar, programın farklı yerlerinde tekrar tekrar kullanılabilen kod parçalarını gruplamak ve kodun daha okunabilir ve yönetilebilir olmasını sağlamak için kullanılır.

// döniş değerli iç içe fonksiyon örnekle

#include <stdio.h>

int fonksiyon1() {
    printf("Fonksiyon 1\n");
    return 1;
}

int fonksiyon2() {
    printf("Fonksiyon 2\n");
    return fonksiyon1();
}

int main() {
    int sonuc = fonksiyon2();
    printf("Sonuç: %d\n", sonuc);
    return 0;
}


diz çöktüğümüzü görmek isteyenler için

