#include <stdio.h>
#include <stdlib.h>

int main (){
    system("cls");
    int i, n, jml, pil, j;
    printf("Menu\n1. Frekuensi Elemen\n2. Elemen terbesar\n");
    printf("Masukkan Pilihan : "); scanf("%d", &pil);
    int e[pil], f[pil];
    switch(pil){
        case 1:
            printf("Masukkan jumlah elemen : "); scanf("%d", &n);
            printf("Masukkan nilai elemen ke dalam indeks\n");
            // int e[n], f[n];

            for(i=0; i<n; i++){
                printf("Elemen ke-%d = ", i+1); scanf("%d", &e[i]);
                f[i]=-1;
            }
            
            for(i=0; i<n; i++){
                jml=1;
                if(f[i]==-1){
                    for(j=i+1; j<n; j++){
                        if(e[i]==e[j]){
                            jml++;
                            f[j]=0;
                        }
                    }f[i]=jml;
                }
                
            }
            for(i=0; i<n; i++){
                if(f[i]!=0){
                    printf("Angka %d muncul %d kali\n", e[i], f[i]);
                }
                
            }
            break; 

        case 2:
            printf("Masukkan jumlah elemen : "); scanf("%d", &n);
            // int e[n], f[n];

            for(i=0; i<n; i++){
                printf("Masukkan bilangan ke-%d : ", i+1); scanf("%d", &e[i]);
            }
            int max = e[0];

            for(i=0; i<n; i++){
                    if(e[i]>max){
                        max=e[i];
                    }
                }
            printf("Elemen terbesar adalah : %d", max);
            break;
    }
    return 0;
}