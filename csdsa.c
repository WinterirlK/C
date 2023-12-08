#include <iostream>
#include <stdio.h>


using namespace std;

int main()
{
    FILE *f = fopen("input.txt", "r");

    if(f == 0){
        printf("blad otwarcia pliku");
        return 0;
    }
    else{

        char elo, pierwsza, ostatnia;
        char *liczba;
        int suma = 0;
        int wynik = 0;
        while(feof(f) == 0 ){
            elo = fgetc(f);
            // printf("%c",elo);


            if(elo>47 && elo<59 && pierwsza == 0){
                pierwsza = elo;
                continue;
            }
            else if(elo>47 && elo<59 && pierwsza != 0){
                ostatnia = elo;
                continue;
            }

            if(elo == '\n'){
                printf("pierwsza: %c ostatnia: %c\n", pierwsza, ostatnia);

                wynik = (pierwsza - '0') *10 + (ostatnia - '0');
                printf("%d\n\n", wynik);
                suma += wynik;
                wynik = 0;
                pierwsza = 0;
            }
        }
    }

}
// integ = (num[0] - '0') * 10 + (num[1] - '0');
