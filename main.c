#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int secim;
    setlocale(LC_ALL,"Turkish");
    printf("L�tfen bir se�im yap�n�z:\n1. �lkbahar\n2. Yaz\n3. Sonbahar\n4. K��\n");
    scanf("%d",&secim);

    switch(secim){

    case 1: printf("�lkbahar� se�tiniz..\n"); break;
    case 2: printf("Yaz� se�tiniz..\n"); break;
    case 3: printf("Sonbahar� se�tiniz..\n"); break;
    case 4: printf("K��� se�tiniz..\n"); break;
    default: printf("L�tfen 1-4 aral���nda se�im yap�n�z...\n"); break;

    }





    return 0;
}
