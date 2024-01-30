#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Punkt{
	protected:
		int X;
		int Y;
	public:
		Punkt(){
			X = 30;
			Y = 45;
		}
		Punkt(int a, int b){
			X = a;
			Y = b;
		}
		int getx(){
			return X;
		}
		int gety(){
			return Y;
		}
		Punkt(Punkt &xd) : X(xd.X), Y(xd.Y){}
		
		Punkt(Punkt &&xd) : X(move(xd.X)), Y(move(xd.Y)){
			xd.X = 0;
			xd.Y = 0;
			
		}
		void NWD(){
			int x = getx();
			int y = gety();
			int najw;
			if(x>y){
				najw = x;
				
			}
			else{
				najw = y;
			}
			int wynik;
			
			for(int i = najw; i>0;i--){
				if(x%i == 0 && y%i == 0){
					wynik = i;	
					break;	
				}
			}
			printf("NWD dla obiektu A: %i\n", wynik);
			
		}
		void odleglosc(Punkt &a, Punkt &b){
			int ax = a.getx();
			int ay = a.gety();
			int bx = b.getx();
			int by = b.gety();
			double wynik = 0;
			
			
			wynik = sqrt(pow((ay-ax),2) + pow((by - bx),2));
			printf("Odleglosc miedzy obiektami C i D: %lf\n", wynik);
		}
		void wypisz(){
			printf("(%d, %d)\n", getx(), gety());
		}
		void cwiartka(){
			int x = getx();			
			int y = gety();
			
			if(x>0){
				if(y>0){
					printf("Punkt A znajduje sie w I cwiartce!\n");
				}
				else{
					printf("Punkt A znajduje sie w IV cwiartce!\n");
				}	
			
			}
			else{
			if(y>0){
				printf("Punkt A znajduje sie w II cwiartce!\n");
			}
			else{
				printf("Punkt A znajduje sie w III cwiartce!\n");
			}
			}
	}
	void kierunkowa(Punkt obiekt1, Punkt obiekt2){
			double wynik = (obiekt2.gety() - obiekt1.gety()) / (obiekt2.getx() - obiekt1.getx());
			
			double b = obiekt1.gety() - (wynik * obiekt1.getx());
			
			printf("y = %lfx + %lf\n", wynik, b);
			
		}
		};
		

int main() {
	Punkt A;
	Punkt B(25,30);
	Punkt C(A);
	Punkt D = move(B);
	A.NWD();
	C.odleglosc(C, D);
 	printf("Równanie prostej kierunkowej l: ");
 	A.kierunkowa(C, D);
 	printf("Równanie prostej kierunkowej k: ");
 	A.kierunkowa(A,B);
 	A.cwiartka();
 	printf("Wszystkie punkty: \n");
 	A.wypisz();
 	B.wypisz();
 	C.wypisz();
 	D.wypisz();
	
	
	
	return 0;
}         

