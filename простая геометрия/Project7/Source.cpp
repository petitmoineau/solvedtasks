 #include <iostream>
#include <cmath>
using namespace std;

struct circles
{
	float coordX[2];
	float coordY[2];
	float radius[2];
	int intersections()
	{
		float dist = sqrt(pow((coordX[1] - coordX[0]), 2) + pow((coordY[1] - coordY[0]), 2));
		float r_sum = radius[0] + radius[1];
		float r_sub = abs(radius[0] - radius[1]);
		if (coordX[0] == coordX[1] && coordY[0] == coordY[1] && radius[0] == radius[1])
		{
			return -1;
		}
		else if (dist < r_sum && dist > r_sub)
		{
			return 2;
		}
		else if (dist == r_sum || dist == r_sub)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
} circle;

int main()
{
	for (int i = 0; i < 2; i++)
	{
		cin >> circle.coordX[i] >> circle.coordY[i] >> circle.radius[i];
	}

	cout << circle.intersections();
	return 0;
}