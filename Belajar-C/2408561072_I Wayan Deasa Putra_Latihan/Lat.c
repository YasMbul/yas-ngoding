#include <stdio.h>
#include <stdlib.h>

int main (){
    system("cls");
    int pil, b1, b2, total, awal, akhir, i, tinggi, jmlh, b, k, lebar;

    printf("Menu Program :\n");
    printf("1. Belanja\n2. Deret Menurun\n3. Deret Fibonacci\n4. Bentuk Persegi\n");
    printf("Masukkan pilihan anda : "); 
    scanf("%d",&pil);

    switch(pil){
        case 1:
        printf("Ketik barang 1 : "); scanf("%d",&b1);
        printf("Ketik barang 2 : "); scanf("%d",&b2);
        total = b1 + b2;
        printf("Belanjaan anda kategori : ");

        if(total<100000){
            printf("Sedikit");
        } else if(total>=100000 && total<=500000){
            printf("Sedang");
        } else if(total>500000){
            printf("Banyak");
        }
        break;

        case 2:
        printf("Ketik bilangan awal : "); scanf("%d",&awal);
        printf("Ketik bilangan akhir : "); scanf("%d",&akhir);
        printf("Deret bilangan Genap ");

        for(i=awal-1; i>akhir; i--){
            if(i%2==0){
                printf("%d ",i);
            //     printf("Genap ");
            // } else if(i%2==1){
            //     printf("Ganjil ");
            }
        }

        // if(awal%2==0){
        //     for(i=awal-2; i>akhir; i=i-2);
        //     printf("%d ",i);
        // } else if(awal%2==1){
        //     for(i=awal-1; i>akhir; i=i-2);
        //     printf("%d ",i);
        // } else {
        //     printf("Error");
        // }
        break;

        case 3:
        printf("Ketik jumlah suku : "); scanf("%d",&jmlh);
        printf("Deret fibonacci : ");
        awal=1; 
        akhir=0;
        i=jmlh;
        while(i>0){
            total=awal+akhir;
            printf("%d ",total);
            awal=akhir; akhir=total;
            i--;
        }
        break;


        case 4:
        printf("Ketik tinggi bintang : "); scanf("%d",&tinggi);
        printf("Ketik lebar bintang : "); scanf("%d",&lebar);
        printf("Tinggi bintang : \n");

        for(b=1; b<=tinggi; b++){
            for(k=1; k<=lebar; k++){
                printf("*");
            }
            printf("\n");
        }
        break;

    }


}