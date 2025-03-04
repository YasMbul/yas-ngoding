#include <stdio.h>
#include <stdlib.h>
void sapa(char nama[]);

int main () 
{
    system("cls");
    char nama[30];
    printf("Siapa nama anda?\n"); 
    printf("Masukkan nama anda : "); scanf("%s", nama);
    sapa(nama);
    // for(int i = 0; i<=30; i++)
    // {
    //     printf("%c\n", nama[i]); 
    // }
}

void sapa(char nama[])
{
    printf("Halo %s, senang berkenalan dengan anda!\n", nama);
}