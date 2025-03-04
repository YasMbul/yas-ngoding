#include <stdio.h>
#include <stdlib.h>


int main (){
    system("cls");
    int awal, akhir, i;
    printf ("Program Deret Bilangan Asli\n");
    printf ("===========================\n");

    printf ("Ketik bilangan awal \t: ");
    scanf ("%d", &awal);
    printf ("Masukkan bilangan akhir : ");
    scanf ("%d", &akhir);

    printf ("Deret bilangan asli diantara %d dan %d adalah \n", awal, akhir);
    printf("While \t: ");

    //Perulangan While
    i = awal+1;
    while(i < akhir){
        printf ("%d ", i);
        i++;
    }

    //Perulangan Do-While
    printf("\n");
    printf("Do-While : ");
    i=awal+1;
    do {
        printf ("%d ", i);
        i++;
    }while(i<akhir);

    //Perulangan For
    printf("\n");
    printf("For \t: ");
    for(i=awal+1; i<akhir; i++)  {
        printf ("%d ", i);
    }
    return 0;
}