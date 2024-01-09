#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Obliczenia{
	private:
		int liczba1;
		int liczba2;
	public:
		void set_liczba1(int n){
			liczba1 = n;
		}
		void set_liczba2(int n){
			liczba2 = n;
		}
		int get_liczba1(){
			return liczba1;
		}
		int get_liczba2(){
			return liczba2;
		}
		int NWW(int a, int b){
			int nwd = NWD(a,b);
			return (a * b)/ nwd;
		}
		int NWD(int a, int b){
			if(a == b){
			return a;
			}
			int xd = 1;
			int nwd;
			while(xd){
				nwd = a % b;
			if(nwd == 0){
				xd = 0;
			return b;
			}
		else{
			a = b;
			b = nwd;
		}
	}
	
}
};




int main() {
	Obliczenia obl;
	obl.set_liczba1(48);
	obl.set_liczba2(16);
	int a = obl.NWD(obl.get_liczba1(), obl.get_liczba2());
	int b = obl.NWW(obl.get_liczba1(), obl.get_liczba2());
	printf("%i - %i\n", a, b);
	
	
	
	return 0;
}
