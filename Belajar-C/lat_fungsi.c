#include <stdio.h>
#include <stdlib.h>
int Luassg4(int p, int l)
{
    return p*l;
}


float Luassg3(float *a, float *t)
{
    return *a* *t/2;
}


int Deretbil(int bil)
{
    if(bil==1)
    {
        return 1;
    }
    else
    {
        return bil + Deretbil(bil-1);
    }
}

int main (){
    system("cls");
    int pil, p, l, batas;
    float a, t;
    char ulang;
        do 
        {
            printf("\nProgram Luas\n");
            printf("Menu\n1. Luas Segiempat (call by value)\n2. Luas Segitiga (call by reference\n3. Jumlah Deret Bilangan Asli (recursive function)\n4. Keluar\n");
            printf("Pilih Menu : "); scanf("%d",&pil);
            
            switch(pil) 
            {
                case 1 :
                    printf("Masukkan Panjang : "); scanf("%d",&p);
                    printf("Masukkan Lebar : "); scanf("%d",&l);
                    printf("Luas Persegi Panjang adalah : %d",Luassg4(p,l));
                    break;

                case 2 : 
                    printf("Masukkan Alas : "); scanf("%f",&a);
                    printf("Masukkan Tinggi : "); scanf("%f",&t);
                    printf("Luas Segitiga adalah : %.2f", Luassg3(&a,&t));
                    break;
                
                case 3 :
                    printf("Masukkan batas : "); scanf("%d",&batas);
                    printf("Masukkan Jumlah Deret : %d", Deretbil(batas));
                    break;

                case 4 : 
                    system("cls");
                    return 0;
                    break;

                default :
                    printf("Pilihan tidak tersedia");
            } 
            
        } while(pil!=4);
        

    return 0;
}