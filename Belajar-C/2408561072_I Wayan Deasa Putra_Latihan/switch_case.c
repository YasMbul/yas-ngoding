#include <stdio.h>
#include <stdlib.h>


int main (){
    system ("cls");
    int awal, akhir, i, pil;
    printf ("Program Deret Bilangan Asli Di Antara Dua Bilangan\n");
    printf ("Menu : \n");
    printf ("1. Deret Ascending\n");
    printf ("2. Deret Descending\n");
    printf ("Pilih menu : ");
    scanf ("%d", &pil);

    switch(pil){
        case 1:
            printf("Ketik bilangan awal : ");
            scanf("%d", &awal);
            printf("Ketik bilangan akhir : ");
            scanf("%d", &akhir);
            for(i=awal+1; i<akhir; i++)  {
            printf ("%d ", i);
            }
        break;
        case 2: 
            printf("Ketik bilangan awal : ");
            scanf("%d", &awal);
            printf("Ketik bilangan akhir : ");
            scanf("%d", &akhir);
            for(i=awal-1; i>akhir; i--)  {
            printf ("%d ", i);
            }
        break;
        default:
            printf("Pilihannya ga ada bangg!\n");
    }
    return 0;
}