// bir switch case kodu yaz
#include <stdio.h>
int main()
{
    int gün;
    printf("Günü giriniz: ");
    scanf("%d", &gün);

    switch (gün)
    {
    case 1:
        printf("Pazartesi\n");
        break;
    case 2:
        printf("Salı\n");
        break;
    case 3:
        printf("Çarşamba\n");
        
    case 4:
        printf("Perşembe\n");
        
    case 5:
        printf("Cuma\n");
        break;
    case 6:
        printf("Cumartesi\n");
        break;
    case 7:
        printf("Pazar\n");
        break;
    default:
        printf("Hatalı giriş\n");
        break;
    }
}


