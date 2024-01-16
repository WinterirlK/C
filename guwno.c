#include <iostream>
#include <cmath>
using namespace std;

class Klasa {
protected:
    int a, b;

public:
    Klasa(){
    	int aa, bb;
		cout<<"Wprowadz liczbe a: ";
		cin>>aa;
		a = aa;
		cout<<"Wprowadz liczbe b: ";
		cin>>bb;
		b = bb;
	}

    // Declaration of friend function
    friend void znajdz(Klasa &obiekt);

    getinta(){
    	return a;
	}
	getintb(){
		return b;
	}
};

// Definition of the friend function
void znajdz(Klasa &obiekt) {
	int a = obiekt.getinta();
	int b = obiekt.getintb();
	if(a > 0){
		if(b == 0){
			cout<<"Punkt znajduje sie na przecieciu cwiartek I i IV";
			
		}
		else if(b>0){
			cout<<"Punkt znajduje sie w Ćwiartce I";	
			}
			
		else{
			cout<<"Punkt znajduje sie w Ćwiartce IV";
			}
		}
	
	else if(a == 0){
		if(b == 0){
			cout<<"Punkt znajduje sie w srodku";	
		}
		else if(b>0){
			cout<<"Punkt znajduje sie na przecieciu I i II";	
		}
		else{
			cout<<"Punkt znajduje sie na przecieciu III i IV";	
		}
		
	}
	else{
		if(b == 0){
			cout<<"Punkt znajduje sie na przecieciu II i III";	
		}
		else if(b>0){
			cout<<"Punkt znajduje sie w cwiartce II";	
		}
		else{
			cout<<"Punkt znajduje sie w cwiartce III";	
		}
	}
}

	
double xdxd(Klasa &obiekt1, Klasa &obiekt2){
	double x1 = obiekt1.getinta();
	double x2 = obiekt1.getintb();
	double y1 = obiekt2.getinta();
	double y2 = obiekt2.getintb();
	
	
	
	double wynik = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
	return wynik;
	
}

double pole(Klasa &obiekt1, Klasa &obiekt2, Klasa &obiekt3){
	double x1 = obiekt1.getinta();
	double x2 = obiekt1.getintb();
	double y1 = obiekt2.getinta();
	double y2 = obiekt2.getintb();
	double z1 = obiekt2.getinta();
	double z2 = obiekt3.getintb();
	
	double bok1 = xdxd(obiekt1, obiekt2);
	double bok2 = xdxd(obiekt2, obiekt3);
	double bok3 = xdxd(obiekt3,obiekt1);
	
	double wynik = (bok1, bok2, bok3) / 2;
	
	
}


int main() {
    Klasa obj, obj2;
//    znajdz(obj);
    printf("%lf", xdxd(obj, obj2));


    return 0;
}
