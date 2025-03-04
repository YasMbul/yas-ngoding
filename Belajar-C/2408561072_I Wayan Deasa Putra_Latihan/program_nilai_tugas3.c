#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int tugas, uts, uas; float rataan, total;
    printf("Program Nilai\n");
    printf("=============\n");
    printf("Ketik nilai Tugas \t: "); scanf("%d",&tugas);
    printf("Ketik nilai UTS \t: "); scanf("%d",&uts);
    printf("Ketik nilai UAS \t: "); scanf("%d",&uas);
    
    total=tugas+uts+uas;
    rataan=total/3;

    printf("Total Nilai Anda \t: %.2f\n",total);
    printf("Rata-rata Nilai Anda \t: %.2f\n",rataan);

    return 0;
}