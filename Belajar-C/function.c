#include <stdio.h>
#include <stdlib.h>
float Luassg3(float a, float t);
int Diskon(int belanja);


int main ()
{
    int pil, belanja;
    float a, t, L;
    system("cls");
    printf("Menu : \n1. Luas segitiga\n2. Diskon belanja\n");
    printf("Pilihan : "); scanf("%d", &pil);
    switch(pil)
    {
        case 1:
            system("cls");
            printf("Luas segitiga\n");
            printf("=============\n");
            printf("Masukkan panjang alas : "); scanf("%f", &a);
            printf("Masukkan panjang tinggi : "); scanf("%f", &t);
            L = Luassg3(a, t);
            printf("Luas segitiga tersebut adalah %.2f", L);
        break;

        case 2:
            system("cls");
            printf("Ketik total belanja ; "); scanf("%d", &belanja);
            printf("Diskon anda : %d", Diskon(belanja));
        break;
        default:
            printf("Pilihannya ga ada kocak\n");
            
    } while(pil>0);
    return 0;
}

float Luassg3(float a, float t)
{
    float L = a*t/2;
    return (L);
}

int Diskon(int belanja)
{
    if(belanja>1000000)
    {

        return (15000);
    }
    else if(belanja>500000&&belanja<=1000000)
    {
        return (10000);
    }
    else if(belanja<=50000)
    {
        return (5000);
    }
}