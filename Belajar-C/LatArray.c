#include <stdio.h>
#include <stdlib.h>

int main (){
    system("cls");
    int n, i; float rataan, total;
    printf("Program Nilai Mahasiswa\n");
    printf("=======================\n");
    printf("Ketik banyaknya Mahasiswa : "); scanf("%d", &n);
    int M[n];


    for(i=0;i<n;i++){
        printf("Nilai Mahasiswa ke-%d : ", i+1); scanf("%d", &M[i]);
        total += M[i];
    } 

    printf("Nilai Mahasiswa ");
    for(i=0;i<n;i++){
        printf("%d", i+1);
        if(i<n-1){
            printf(", ");
        }
    } printf(" berurutan yaitu : ");
    for(i=0;i<n;i++){
        printf("%d", M[i]);
        if(i<n-1){
            printf(", ");
        } else {
            printf(".");
        }
    }  rataan = total/n;

    printf("\nTotal nilai : %.2f\n", total);
    printf("Rata-rata : %.2f", rataan);

    return 0;
}