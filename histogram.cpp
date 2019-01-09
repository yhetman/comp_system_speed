
#include "template.hpp"

float	arr[16];
double	Time;
double	MAX;

string	arr_of_types[] = { "int   ", "double","float ","char  " };
string	arr_of_sign[] = {"+", "-", "*", "/"};

void		histogram(float arr[])
{
	int		a;
	int		p;
	int		result;
	float	tempor;

	a = 0;
	MAX = arr[0];
	for (int i = 1; i < 16; i++)
		MAX = max(arr[i], MAX);
	for (int j = 0; j < 4; j++)
	{
		for (int k = a, i = 0; k < 4 + a && i < 4; k++, i++)
		{
			cout << arr_of_sign[i].c_str() << " " << arr_of_types[j].c_str() << "  " << arr[k] << " \t";
			tempor = (float)arr[k] / (float)MAX;
			result = ceil(tempor * 40);
			for (p = 0; p < result; p++)
				cout << "X";
			for (p = 0; p < 40 - result; p++)
				cout << " ";
			cout << " " << ((int)(tempor * 10000 + 0.5)) / 100.0<< "%" << endl;
		}
		a += 4;
		cout << endl;
	}
}
