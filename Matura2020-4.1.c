#include <stdlib.h>
#include <stdio.h>

void hipoteza(int a, int*pierwsza, int *druga, int *tablica_liczb_pierwszych){
    int i;
    int start;
    for(i = 24;i>0;i--){
        if(tablica_liczb_pierwszych[i]<a){
            start = i; // indeks pierwszej liczby pierwszej mniejszej od podanej;
            break;
        }
    }

    for(int k = start;k>0;k--){
        for(int j = 0;j<start;j++){
            if(tablica_liczb_pierwszych[k] + tablica_liczb_pierwszych[j] == a){
                *pierwsza = tablica_liczb_pierwszych[j];
                *druga = tablica_liczb_pierwszych[k];
                break;
            }
        }
    }

}


int main(){
    int liczby_pierwsze[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

    FILE * fileopen = fopen("pary.txt","r");
    FILE * filesave = fopen("wyniki4.txt","w");

    int liczba, pierwsza, druga, temp;
    char wyraz[50];
    if(fileopen==0){
        printf("blad");
    }
    else{
        while (feof(fileopen)==0)
            {
                fscanf(fileopen,"%i",&liczba);
                fscanf(fileopen,"%s",&wyraz);
                if(liczba%2 == 0){
                    hipoteza(liczba,&pierwsza, &druga, liczby_pierwsze);
                    if(pierwsza>druga){
                        temp = druga;
                        druga = pierwsza;
                        pierwsza = temp;
                    }
                    fprintf(filesave,"%d\t%d\t%d\n",liczba,pierwsza,druga );
                }




            }
    }
    fclose(fileopen);

    fileopen = fopen("pary.txt","r");




}
