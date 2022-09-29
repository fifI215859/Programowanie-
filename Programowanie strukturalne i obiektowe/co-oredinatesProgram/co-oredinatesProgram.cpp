#include <iostream>

double calculateDIstance(int a, int b)
{
	return sqrt(a * a + b * b);
}

void CoordinateTestVersion1()
{
	int x, y; 
	std::cout << "Podaj x:\n";
	std::cin >> x; 

	std::cout << "Podaj y:\n";
	std::cin >> y;
	
	//double distance = sqrt(x * x + y * y);

	double distance = calculateDIstance(x, y);
	std::cout << "Odleglosc to:" << distance << "\n";
}

int main()
{
	CoordinateTestVersion1();
}

