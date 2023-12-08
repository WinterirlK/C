#include <iostream>
#include <cstdio>




int main()
{
    FILE *f = fopen("input.txt", "r");

    if(f == 0){
        printf("blad otwarcia pliku");
        return 0;
    }
    else{

        char elo, pierwsza, ostatnia;

        int suma = 0;
        int wynik = 0;
        while((elo = fgetc(f)) != EOF){

            // printf("%c",elo);


            if(elo>47 && elo<59 && pierwsza == 0){
                pierwsza = elo;
                ostatnia = elo;

            }
            else if(elo>47 && elo<59 && pierwsza != 0){
                ostatnia = elo;

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
        printf("pierwsza: %c ostatnia: %c\n", pierwsza, ostatnia);

        wynik = (pierwsza - '0') *10 + (ostatnia - '0');
        printf("%d\n\n", wynik);
        suma += wynik;
        wynik = 0;
        pierwsza = 0;



        printf("%d",suma);
    }

}
