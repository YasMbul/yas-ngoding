#include <stdio.h>
#include <stdlib.h>

int main (){
    system("cls");
    int b, k, i, j;
    printf("Program bilangan\n");
    printf("================\n");
    printf("Ketik jumlah baris : "); scanf("%d",&b);
    printf("Ketik jumlah kolom : "); scanf("%d",&k);
    int e[b][k]; 
    float rataan, total = 0;

    printf("Ketik data\n");
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<k;j++)
        {
            printf("A[%d][%d] : ",i,j); scanf("%d",&e[i][j]);
            total += e[i][j];
        }
    }
    printf("Data yang di input adalah\n");
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<k;j++)
        {
            printf("A[%d][%d] : %d\n",i,j,e[i][j]);
        }
    }

    int max=e[0][0];
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(e[i][j]>max)
            {
                max=e[i][j];
            }
        }
    }
    
    int min=e[0][0];
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(e[i][j]<min)
            {
                min=e[i][j];
            }
        }
    }
    rataan = total/(b*k);

    printf("Bilangan maksimum : %d\n",max);
    printf("Bilangan minimum : %d\n",min);
    printf("Total : %.0f",total);
    printf("Rata-rata : %.2f",rataan);  
    
    return 0;
}