#include <iostream>

struct Point
{
	int x;
	int y;
};

double calculateDistance(int a, int b)
{
	double distance = sqrt(a * a + b * b);
	return distance;
}

double calculateDistance(Point p)
{
	double distance = sqrt(p.x * p.x + p.y * p.y);
	return distance;
}

void CoordinateTestVersion1()
{
	int x, y;

	std::cout << "Podaj x:\n";
	std::cin >> x;

	std::cout << "Podaj y:\n";
	std::cin >> y;

	//double distance = sqrt(x * x + y * y);

	double distance = calculateDistance(x, y);
	std::cout << "Odleglosc to:" << distance << "\n";
}

void CoordinateTestVersion2()
{
	Point userpoint;
	std::cout << "Podaj x:\n";
	std::cin >> userpoint.x;

	std::cout << "Podaj y:\n";
	std::cin >> userpoint.y;

	//double distance = sqrt(x * x + y * y);
	double distance = calculateDistance(userpoint.x, userpoint.y);

	std::cout << "Odleglosc to:" << distance << "\n";
}
int main()
{
	CoordinateTestVersion2();
}

std::string name;
std::string sureanme;
int age;
int height;

struct Person
{
	std::string name;
	std::string surename;
	int age;
	int height;
	Point coordinate;
};

Person p1;
//p.1 name
//p.1.coordinate.x = 5 ;



std::string nameTab[5];
std::string sureanmeTab[5];
int ageTab[5];
int heighTab[5];

Person pTab[5];
//pTab[1].name = "Ala";

