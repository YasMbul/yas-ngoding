#include <stdio.h>
#include <stdlib.h>

int main ()
{
    system("cls");
    int n, i; 
    float total=0, rataan;
    printf("Ketik jumlah bilangan : "); //Input banyaknya elemen
    scanf("%d",&n);
    int b[n];

    for(i=0; i<n; i++)                  //Mengisi array dengan elemen
    {
        printf("Bil-%d : ", i+1); 
        scanf("%d", &b[i]);
        total += b[i];                  //Menghitung total
    }
    printf("Bilangan yang diketik\n");
    for(i=n; i>0; i--)                  //Mengelaurkan daftar bilangan yang telah di input secara terbalik
    {
        printf("Bil-%d : %d\n", i, b[i-1]);
    }

    int max = b[0];                         //Program untuk mengetahui elemen paling besar
    for(i=0; i<n; i++)
    {
        if(b[i]>max)
        {
            max=b[i];
        }
    }
    int min = b[0];                         //Program untuk mengetahui elemen paling kecil
    for(i=0; i<n; i++)
    {
        if(b[i]<min)
        {
            min=b[i];
        }
    }

    rataan = total/n;                       //Mencari rata-rata

    if(n%2==0)
    {
        printf("Nilai tengah adalah %d dan %d\n", b[(n/2)-1], b[n/2]);
    } else {
        printf("Nilai tengah adalah %d\n", b[(n-1)/2]);
    }
    printf("Bilangan maksimum : %d\n", max); 
    printf("Bilangan minimum : %d\n", min);   
    printf("Total : %.0f\n", total);   
    printf("Rata-rata : %.2f\n", rataan);   

    return 0;
}