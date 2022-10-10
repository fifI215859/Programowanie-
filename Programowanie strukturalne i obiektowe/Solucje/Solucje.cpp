#include <iostream>

int globalVariable = 7;

void AnotherFunction(int parametr)
{
	parametr = 12;
	int anotherLocalVariableInFunction = 6;
	globalVariable = 8;
}

void TestFunction()
{
	int loacalVariableInFunctio = 5;
	AnotherFunction(loacalVariableInFunctio);
	globalVariable = 12;
}

int main()
{
	/*int localVariableInFunctio = 8;
	TestFunction();
	globalVariable = 77;
	AnotherFunction(7);*/

	//ta zmienna wyladuje na stosie 
	//deklaracja zmienej o nazwie "numer" TYPU int 
	int number; 
	number = 77; 
	std::cout << number << "\n";
	//sterta wolny obszar pamieci RAM 
	// sterta - deklaracja zmiennej lokalnej o nazwie 'wsk' ktora jest wskaznikiem na TYP int  
	int* wsk;
	wsk = new int;
	*wsk = 7; 
	//ywswietlenie adresu w jakiej znajduje sie obraz w stercie  
	std::cout << wsk << " \n";
	std::cout << *wsk << "\n";
	number = (*wsk) * 2;
	std::cout << "********************************************\n";

	int tab[3];
	tab[0] = 5; 
	*tab = 5; 

	tab[1] = 15;
	*(wsk + 1) = 15;

	tab[2] = 15;
	*(wsk + 2) = 15;
	std::cout << "adrer 0 element tablicy \t" << tab << "\n";
	std::cout << "adres 1 element tabliucy \t" << tab << "\n";


	std::cout << "********************************************\n";

	int tab2[14]; 
	const int rozmiar = 5; 
	//int tab3[]
	int tab4[rozmiar];

	int* tab5 = new int[number];
	tab5[7] = 15;
	*(tab5 + 7) = 15;
		 
	tab5 = new int[number];
}