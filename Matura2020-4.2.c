#include <stdlib.h>
#include <stdio.h>
#include <string.h>



char* char_chuj(char* wyraz, int *dlugosc) {
    char *temp = wyraz;
    int elo = 1;
    int i = 1;
    int max = 1;
    char *tablica;
    int index = 0;
    
    while (wyraz[i] != '\0') {
        if (wyraz[i] == wyraz[i - 1]) {
            elo++;
        }
        if (elo > max) {
            max = elo;
            index = i;
        }
        if (wyraz[i] != wyraz[i - 1]) {
            elo = 1;
        }
        i++;
    }

    // Alokacja nowej pamięci dla wyniku
    tablica = (char*)malloc((max + 1) * sizeof(char));
    if (tablica == NULL) {
        return NULL;
    }

    // Kopiowanie znalezionego ciągu do nowej pamięci
    strncpy(tablica, &wyraz[index - max + 1], max);
    tablica[max] = '\0'; // Null-terminate the string

    wyraz = temp;
    *dlugosc = max;
    return tablica;
}



int main() {
    FILE *fileopen = fopen("pary.txt", "r");
    FILE *filesave = fopen("wyniki4.txt", "w");

    if (fileopen == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    if (filesave == NULL) {
        printf("Error opening output file.\n");
        fclose(fileopen);
        return 1;
    }

    int liczba;
    char znak[50];
    int dlugosc = 0;

    while (fscanf(fileopen, "%i %s", &liczba, znak) == 2) {
        char *result = char_chuj(znak, &dlugosc);
        printf("%s\t%d\n",result, dlugosc);
        // printf("%s %d", result, dlugosc);
        // printf("%d \t%s\n", liczba, znak);
        free(result);
    }

    fclose(fileopen);
    fclose(filesave);

    return 0;
}
