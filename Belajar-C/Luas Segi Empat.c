#include <stdio.h>
#include <stdlib.h>

int main (){
    
    system("cls");
    int p, l, luas;
    printf("Program Luas Segi Empat  \n");
    printf("Masukkan Panjang : "); 
    scanf("%d",&p);
    printf("Masukkan Lebar : "); 
    scanf("%d",&l);
    
    luas = p * l;
    
    printf("Luas Segi Empat dengan panjang %d dan lebar %d adalah : %d \n", p, l, luas);
    return 0;
}