#include <stdio.h>
#include <stdlib.h>

int main (){
    
    system("cls");
    int brg1, brg2, total, bayar, kembalian;
    printf("Program Belanja  \n");
    printf("-------------------------------- \n");
    printf("Harga Barang 1 : "); 
    scanf("%d",&brg1);
    printf("Harga Barang 2 : ");
    scanf("%d",&brg2);

    total = brg1 + brg2;

    
    printf("Total : %d\n", total);
    printf("Bayar : "); 
    scanf("%d",&bayar);
    kembalian = bayar - total;
    printf("Kembalian : %d\n", kembalian);
    return 0;
}