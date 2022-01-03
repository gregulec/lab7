#include<iostream>
#include<string>
using namespace std;

struct osoba {
	string imie = "Karol";
	string nazwisko = "Nowak";
	string plec = "mezczyzna";
	int wiek = 25;

	osoba(){
	}

	osoba(string imie, string nazwisko, string plec, int wiek) {
		this->imie = imie;
		this->nazwisko = nazwisko;
		this->plec = plec;
		this->wiek = wiek;
	}
};

struct student {
	string imie = "Karol";
	string nazwisko = "Nowak";
	string urodziny = "12.11.1990";
	int indeks = 129809;

	student(){
	}

	student(string imie, string nazwisko, string urodziny, int indeks) {
		this->imie = imie;
		this->nazwisko = nazwisko;
		this->urodziny = urodziny;
		this->indeks = indeks;
	}
};

ostream& operator <<(ostream& w, osoba &dane) {
	w << "Imie " << dane.imie << endl << "Nazwisko " << dane.nazwisko << endl << "Plec " << dane.plec << endl << "Wiek " << dane.wiek << endl;
	return	w;
}

ostream& operator <<(ostream& w, student &dane) {
	w << "Imie " << dane.imie << endl << "Nazwisko " << dane.nazwisko << endl << "Data urodzin " << dane.urodziny << endl << "Indeks " << dane.indeks << endl;
	return	w;
}

int main() {
	osoba o;
	student s;
	cout << "Dane Osoba:" << endl << o << endl;
	cout << "Dane Student:" << endl << s;
}