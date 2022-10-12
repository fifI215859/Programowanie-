#include <iostream>

struct CoordinateGPS
{
	int x, y;
};
class Car
{
public:
	Car(std::string name)
	{
		this->name = name;
		coordinateGPS.x = 0;
		coordinateGPS.y = 0;
	}

	Car(std::string name, int x, int y)
	{
		this->name = name;
		coordinateGPS.x = x;
		coordinateGPS.y = y;
	}
	void ShowInfo()
	{
		std::cout << "**********************************\n";
		std::cout << "samolochod o nawie:" << name << "\n";
		std::cout << "Pozycja (" << coordinateGPS.x << ";" << coordinateGPS.y << ")\n";
		std::cout << "**************************************\n";
	}

	void MoveForward()
	{

	}


protected:

private:
	std::string name;
	CoordinateGPS coordinateGPS;
};
int main()
{
	setlocale(LC_CTYPE, "polish");

	Car carFirst("Bugatti La vointure Norie");
	Car carSecond("Audi RSQ8", 10, 10);
	carFirst.ShowInfo();
	carSecond.ShowInfo();
}