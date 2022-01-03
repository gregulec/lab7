#include<iostream>
#include<string>

using namespace std;

struct Kola{
	double srednica;
	double szerokosc;
	string ogumienie;

	Kola(){
	};

	Kola(double srednica, double szerokosc, string ogumienie){
		this->srednica = srednica;
		this->szerokosc = szerokosc;
		this->ogumienie = ogumienie;
	}
};

struct Silnik{
	double pojemnosc;
	string paliwo;

	Silnik(){
	};

	Silnik(double pojemnosc, string paliwo){
		this->pojemnosc = pojemnosc;
		this->paliwo = paliwo;
	}
};

struct Samochod {
	Kola kola;
	Silnik silnik;

	Samochod() {
	};

	Samochod(Kola kola, Silnik silnik) {
		this->kola = kola;
		this->silnik = silnik;
	}
};

ostream& operator<<(ostream& w, Samochod&samochod) {
	w << samochod.kola.srednica << endl << samochod.kola.szerokosc << endl << samochod.kola.ogumienie << endl << samochod.silnik.pojemnosc << endl << samochod.silnik.paliwo << endl << endl;
	return w;
}

istream& operator>>(istream& w, Samochod&samochod) {
	w >> samochod.kola.srednica >> samochod.kola.szerokosc >> samochod.kola.ogumienie >> samochod.silnik.pojemnosc >> samochod.silnik.paliwo;
	return w;
}

int main() {
	Samochod samochod;
	cin >> samochod;
	cout << samochod;

}