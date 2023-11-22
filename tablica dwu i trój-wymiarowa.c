#include <stdio.h>
#include <stdlib.h>


int main(){

    // TABLICA TRÓJWYMIAROWA

    int n,m,b;
    int ***tab;
    printf("Wprowadz liczbe kolumn: ");
    scanf("%d",&n);
    printf("Wprowadz liczbe rzedow: ");
    scanf("%d",&m);
    printf("Wprowadz liczbe teczek: ");
    scanf("%d",&b);

    tab = (int ***)malloc(n * sizeof(int **));

    for(int i = 0;i<n;i++){
            tab[i] = (int **)malloc(m * sizeof(int *));
    }

    for(int j = 0;j<n;j++){
        for(int k = 0;k<m;k++){
            tab[j][k] = (int *)malloc(b * sizeof(int));
        }
    }

    for( int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<b;k++){
                tab[i][j][k] = 0;
                printf("%d", tab[i][j][k]);
            }
            printf("\t");
        }
        printf("\n\n\n\n");
    }



/*    
    //TABLICA DWUWYMIAROWA:

    int **tab;
    int c, r;
    printf("Wprowadz liczbe kolumn: ");
    scanf("%d",&c);
    printf("Wprowadz liczbe rzedow: ");
    scanf("%d",&r);

    tab = (int **)malloc(c * sizeof(int *));
    for(int k = 0;k<c;k++){
        tab[k] = (int *)malloc(r * sizeof(int *));
    }

    for(int i = 0;i<c;i++){
        for (int j = 0; j<r; j++){
            tab[i][j] = 1;
            printf("%d", tab[i][j]);
        }
        printf("\n");


    }

*/


}
