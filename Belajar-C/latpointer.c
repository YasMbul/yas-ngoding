#include <stdio.h>
#include <stdlib.h>

// int input(int bil[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("Bil - %d : ", i+1); scanf("%d", &bil[i]);
//     }
//     return bil[n];
// }
// int maxbil(int b[], int n){
//     int max = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (b[i] > max)
//         {
//             max = b[i];
//         }
//     }
//     return max;
// }
// float Total(int bil[], int n){
//     float jumlah = 0;
//     for (int i = 0; i < n; i++)
//     {
//         jumlah += bil[i];
//     }
//     return jumlah;
// }
// float rata(float jumlah, int b){
//     return jumlah/b;
// }
// int penjumlahanGanjil(int bil){
//     if (bil == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return (bil * 2 - 1) + penjumlahanGanjil(bil-1);
//     }
// }
// int deretGenap(int n){
//     if(n == 1){
//         return 2; 
//     }
//     return (2 * n ) + deretGenap(n - 1);
// }


// int main (){
//     system("cls");
    
//     int pil, jumlahBill, hasil, bil, angka, n; 
//     float total, rataan;


//     printf("Menu :\n1. Program Max dan Rata-rata\n2. Program Penjumlahan Deret Genap\n3. Program Penjumlahan Deret Ganjil\n");
//     printf("Pilih Menu : "); scanf("%d", &pil);

//     switch (pil)
//     {
//     case 1: {
//         printf("Ketik Banyaknya Elemen : "); scanf("%d", &n);
//         printf("Ketik Bilangan : \n");
//         int bil[n];

//         input(bil, n);

//         printf("Bilangan terbesar adalah %d\n", maxbil(bil, n));
        
//         printf("Total = %.2f\n", Total(bil, n));

//         printf("Rata-rata = %.2f", rata(Total(bil, n), n));
//     break;
//     }
//     case 2: {
//         printf("Ketik Jumlah Bilangan Ganjil : ");
//         scanf("%d", &jumlahBill);

//         printf("Sum Deret : ");
//         for (int i = 1; i <= jumlahBill; i++){
//             printf("%d", 2 * i);
//             if(i < jumlahBill){
//                 printf(" + ");
//             }
//         }
//         printf(" = %d", deretGenap(jumlahBill));
//     break;
//     }
//     case 3: {
//         printf("Ketik Jumlah Bilangan : "); scanf("%d", &angka);
//         printf("Hasilnya adalah ");
//         for (int i = 1; i <= angka; i++)
//         {
//             printf("%d", i*2-1);
//             if(i<angka)
//             {
//                 printf(" + ");
//             }
//             else 
//             {
//                 printf(" = ");
//             }
//         }
        
//         printf("%d", penjumlahanGanjil(angka));
//     break;
//     }
//     default:
//         printf("Pilihannya gak ada kocak");
//     break;
//     }

    
// }



int isidata(int b, int k, int a)
{
    a = malloc(b*k*sizeof(int));
    for(int i = 0; i < b; i++)
    {
        for(int j = 0; j < k; j++)
        {
            printf("A[i][j] = "); 
            scanf("%d", a+i*b+j);
        }
    }
    return a;
}

// void tampilmatriks(int B[][], int b, int k)
// {
//     for(int i = 0; i < b; i++)
//     {
//         for(int j = 0; j < k; j++)
//         {
//             printf("A[i][j] = %d", &B[i][j]);
//         }
//     }
// }

void main()
{
    system("cls");
    int b, k, C;

    printf("Program Penjumlahan Matriks\n");
    printf("Ketik Baris : "); scanf("%d", &b);
    printf("Ketik Kolom : "); scanf("%d", &k);
    int A[b][k];
    int B[b][k];

    printf("Isi Matriks :\n");
    
    for(int i = 0; i < b; i++)
    {
        for(int j = 0; j < k; j++)
        {
            printf("A[%d][%d] = ", i, j); scanf("%d", &A[i][j]);
        }
    }

    for(int i = 0; i < b; i++)
    {
        for(int j = 0; j < k; j++)
        {
            printf("B[%d][%d] = ", i, j); scanf("%d", &B[i][j]);
        }
    }
    
    printf("Hasil : \n");

    for(int i = 0; i < b; i++)
    {
        for(int j = 0; j < k; j++)
        {
            C = A[i][j] + B[i][j];
            printf("C[%d][%d] = %d", i, j, C);
            printf("\n");
        }
    }
    

}