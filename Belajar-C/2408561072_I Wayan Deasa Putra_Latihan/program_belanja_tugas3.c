#include <stdio.h>
#include <stdlib.h>

int main (){
    system("cls");
    int b1, b2, b3, total, bayar, kembali;
    printf("Program Belanja\n");
    printf("+++++++++++++++\n");
    printf("Ketik 3 harga item belanja\n");
    printf("Item 1 : "); scanf("%d",&b1);
    printf("Item 2 : "); scanf("%d",&b2);
    printf("Item 3 : "); scanf("%d",&b3);

    total=b1+b2+b3;
    printf("Total = %d + %d + %d = %d\n", b1, b2, b3, total);
    printf("Masukkan jumlah uang anda = "); scanf("%d",&bayar);
    kembali=bayar-total;
    printf("Kembalian anda = %d",kembali);

    return 0;
}