#include <stdio.h>
#include <stdlib.h>

// int hasil(int awal, int selisih, int n)
// {
//     if(n == 0)
//     {
//         return awal;
//     }
//     else
//     {
//         return awal + selisih*n  + hasil(awal, selisih, n-1);
//     }
// }

// void main ()
// {
//     system("cls");
//     int n, selisih, awal;
//     printf("Masukkan banyak deret : "); 
//     scanf("%d", &n);
//     printf("Masukkan selisih : "); 
//     scanf("%d", &selisih);
//     printf("Masukkan angka awal : "); 
//     scanf("%d", &awal);

//     printf("Sum Deret : ");
//     for(int i = 0; i < n; i++)
//     {
//         printf("%d ", awal + selisih*i);
//         if(i<n)
//         {
//             printf("+ ");
//         }
//     }
//     printf("= %d", hasil(awal, selisih, n-1));
    
// }


// int main()
// {
//     system("cls");
//     int t;
//     printf("Ketikkan tinggi : "); scanf("%d", &t);
    
//     for(int i = 1; i <= t; i++)
//     {
//         if(i < t)
//         {
//             for(int j = i; j < t; j++)
//             {
//                 printf(" ");
//             }
//         }
//         for(int k = 1; k <= i; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

// }


int main()
{
    system("cls");
    int n, totalbarang = 0;
    
    printf("Masukkan banyak buku : "); scanf("%d", &n);
    char judul[n][50];
    int banyak[n][1];
    int harga[n][1];
    float total[n][1];

    printf("Masukkan data buku : \n");
    for(int i = 0; i < n; i++)
    {
        total[i][1] = 0;
        printf("Buku-%d : \n", i+1);
        printf("judul buku : "); scanf("%s", &banyak[i][50]);

        printf("banyak buku : "); scanf("%d", &banyak[i][1]);
        printf("harga buku : "); scanf("%d", &harga[i][1]);

        total[i][1] = banyak[i][1] * harga[i][1];
        totalbarang += banyak[i][1];
    }

    printf("| No | Nama Barang \t | QTY | Total \t |\n");
    for(int i = 0; i < n; i++)
    {
        printf("| %d | %s \t | %d | %.2f \t |\n", i+1, judul[i][50], banyak[i][1], total[i][1]);
    }

    int fav = 0;
    char bukufav;
    for(int i = 0; i < n; i++)
    {
        if(banyak[i][1] > fav)
        {
            fav = banyak[i][1];
            bukufav = judul[i][50];
        }
    }
    
    float jumlah = 0;
    printf("Buku paling favorit adalah : %s", bukufav);
    for(int i = 0; i < n; i++)
    {
        jumlah += total[i][1]; 
    }
    printf("total harga barang : %.2f", jumlah);
    float rataan = jumlah/totalbarang;
    printf("rata-rata harga barang : %.2f", rataan);



    return 0;
}