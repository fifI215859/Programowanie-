#include <iostream>
#include <math.h>

/*
Zadania:
* Napisz funkcję, która dla kolekcji danych liczbowych obliczy średnią arytmetyczną.
* Napisz funkcję, która dla kolekcji danych liczbowych policzy ile jest liczb większych od średniej arytmetycznej.
* Napisz funkcje, która dla kolekcji danych liczbowych przeniesie te liczby do innej kolekcji w odwrotnej kolejności.
* Napisz funkcje, która dla kolekcji danych liczbowych obliczy częstotliwość występowania danej liczby.
* Napisz funkcję, która dla kolekcji danych liczbowych znajdzie najdłuższy rosnący podciąg.
* Napisz funkcję, która dla kolekcji danych liczbowych przeniesie te liczby do osobnych kolekcji liczb parzystych i nieparzystych.
*
*/

void  ŚredniaArytmetyczna()
{
	int n;
	int liczba;

	double suma = 0;

	std::cout << "średnai z ilu liczb";
	std::cin >> n;

	if (n > 0)
	{
		for (int i = 1; i <= n; n++)
		{
			std::cout << "Podaj" << i << "Liczbe";
			std::cin >> liczba;
			suma = i;
		}
	}
}
void LiczbaWieŚr()
{
	const int rozmiar = 5; 
	int liczby[rozmiar];
	int LiczbyWIększe = 0;
	int suma = 0;

	for (int i = 1; i <= n; n++)
	{
		std::cout << "Podaj" << i << "Liczbe";
		std::cin >> liczby[i];
		suma += liczby[i];
	}
	suma = suma / rozmiar;
	for (int i = 0; i < rozmiar; i++)
	{
		if (liczby[i] > suma){
			LiczbyWIększe++;
		}
	}
	std ::cout << LiczbyWIększe;
}




int Main()
{
	ŚredniaArytmetyczna;
	LiczbaWieŚr;
}
