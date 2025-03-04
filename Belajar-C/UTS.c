#include <stdio.h>
#include <stdlib.h>

int main (){
    system("cls");
    int b1, b2, ulang, pil, akhir, batas, jmlh, total, awal;

    printf("Menu PIlihan : \n");
    printf("1. Perulangan 2 angka\n2. Deret bilangan persegi menurun genap\n3. Deret Fibonacci\n");
    printf("Masukkan pilihan : "); scanf("%d",&pil);

    switch(pil){
        case 1: 
            printf("Masukkan bilangan pertama : "); scanf("%d",&b1);
            printf("Masukkan bilangan kedua : "); scanf("%d",&b2);
            printf("Masukkan jumlah perulangan : "); scanf("%d",&ulang);

            // Dengan menggunakan for
            printf("Dengan For : ");
            for(int i=1; i<=ulang; i++){
                printf("%d",b1); printf(", ");
            } for(int i=1; i<=ulang; i++){
                printf("%d",b2); 
                if(i<ulang){
                    printf(", ");
                }
            } printf("\n");

            // Dengan menggunakan While
            printf("Dengan While : ");
            int i=1;
            while(i<=ulang){
                printf("%d",b1); printf(", "); i++;
            } i=1; 
            while(i<=ulang){
                printf("%d",b2); 
                if(i<ulang){
                    printf(", ");
                }
                i++;
            } printf("\n");

            // Dengan menggunakan Do-While
            printf("Dengan Do-While : ");
            i=1;                                
            do{
                printf("%d",b1); printf(", "); i++;
            } while(i<=ulang);
            i=1;
            do{
                printf("%d",b2); 
                if(i<ulang){
                    printf(", ");
                }
                i++;
            } while(i<=ulang);
        break;

        case 2: 
            printf("Masukkan Bilangan Awal : "); scanf("%d",&awal);
            printf("Masukkan Bilangan Akhir : "); scanf("%d",&akhir);
            printf("Masukkan Batas Lebar : "); scanf("%d",&batas);
            if(awal %2 == 0){
                for(int b=awal; b>=akhir; b=b-2){
                    for(int k=1; k<=batas; k++){
                        printf("%d",b);
                    } printf("\n");
                }
            } else if(awal %2 == 1){
                awal = awal-1;
                for(int b=awal; b>=akhir; b=b-2){
                    for(int k=1; k<=batas; k++){
                        printf("%d",b);
                    } printf("\n");
                }
            }
        break;

        case 3:
        printf("Ketik jumlah suku : "); scanf("%d",&jmlh);
        printf("Deret fibonacci : ");
        awal=1; akhir=0;
        for(int i=1; i<=jmlh; i++){
            total=awal+akhir;
            printf("%d",total);
            awal=akhir; akhir=total;
            if(i<jmlh){
                printf("-");
            }
        }
        break;
    }
    return 0;
}