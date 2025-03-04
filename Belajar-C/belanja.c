#include <stdio.h>
#include <stdlib.h>

int main (){
    system("cls");
    int barang, barang2, total, diskon, total2, bayar, kembali;
    printf ("Selamat datang dalam Program Belanja \n");
    printf ("Ketik barang 1 \t: ");
    scanf ("%d", &barang);
    printf ("Ketik barang 2 \t: ");
    scanf ("%d", &barang2);
    total = barang + barang2;
    printf ("Total harga \t: %d \n", total);
    if (total > 100000 && total >= 500000){
        diskon = total * 0.1;
    }
    else if (total > 500000 && total >= 1000000){
        diskon = total * 0.15;
    }
    else if (total > 100000){
        diskon = total * 0.2;
    }
    else {
        diskon = 0;
        printf ("Diskon : tidak ada \n");
    }
    total2 = total - diskon;
    printf ("Diskon belanja anda \t: %d \n", diskon);
    printf ("Total bayar anda setelah diskon \t: %d \n", total2);
    printf ("Masukkan junmlah uang anda \t: ");
    scanf ("%d", &bayar);
    kembali = bayar - total2;
    printf ("Kembalian anda \t: %d \n", kembali);
}
