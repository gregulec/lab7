#include<iostream>
#include<string>
using namespace std;

struct osoba {
	string imie;
	string nazwisko;
	int wiek;
	string plec;

	osoba wyswietl(osoba&dane){
		cout << dane.imie << endl;
		cout << dane.nazwisko << endl;
		cout << dane.wiek << endl;
		cout << dane.plec << endl;
		return dane;
	}
};

osoba* wczytaj() {
	osoba* dane1 = new osoba;
	cout << "Prosze podac imie ";
	cin >> dane1->imie;
	cout << "Prosze podac nazwisko ";
	cin >> dane1->nazwisko;
	cout << "Prosze podac wiek ";
	cin >> dane1->wiek;
	cout << "Prosze podadc plec ";
	cin >> dane1->plec;
	return  dane1;
}

int main() {
	osoba *o = wczytaj();
	wyswietl(*o);
	delete o;
}