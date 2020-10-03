#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int Data[10];
	int Elemen;

	for (Elemen = 0; Elemen <= 9; Elemen++)
	{
		cout << "Data Ke - " << Elemen << ": ";
		cin >> Data[Elemen];
	}

	/* Tampilkan Data Setelah Entri */
	for (Elemen = 0; Elemen <= 9; Elemen++)
	{
		cout << "Data Ke - " << Elemen << ": " << Data[Elemen] << "\n";
	}

	_getch();
	return 0;
}