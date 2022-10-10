#include <iostream>
class Point
{
public:

	double calculateDistance()
	{
		double distance = sqrt(x * x + y * y);
		return distance;
	}
	void SetX(int x)
	{
		if (x >= 0)
			this->x = x;
	}
	void SetY(int y)
	{
		if (y >= 0)
			this->y = y;
	}

protected:

private:
	int x;
	int y;
};

double calculateDistance(Point p)
{
	double distance = sqrt(p.x * p.x + p.y * p.y);
	return distance;
}
int main()
{
	Point point; 
	//point.x = 10;
	point.SetX(10);
	point.SetY(15);
	double distance = point.calculateDistance();
	std::cout << "Dystsns od punktu (0;0 )=" << distance << "\n";
}