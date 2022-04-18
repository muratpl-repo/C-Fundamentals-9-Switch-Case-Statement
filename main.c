#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int secim;
    setlocale(LC_ALL,"Turkish");
    printf("Lütfen bir seçim yapýnýz:\n1. Ýlkbahar\n2. Yaz\n3. Sonbahar\n4. Kýþ\n");
    scanf("%d",&secim);

    switch(secim){

    case 1: printf("Ýlkbaharý seçtiniz..\n"); break;
    case 2: printf("Yazý seçtiniz..\n"); break;
    case 3: printf("Sonbaharý seçtiniz..\n"); break;
    case 4: printf("Kýþý seçtiniz..\n"); break;
    default: printf("Lütfen 1-4 aralýðýnda seçim yapýnýz...\n"); break;

    }





    return 0;
}
