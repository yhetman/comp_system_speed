#include "template.hpp"

using namespace std;

int		main(void)
{
	float		arr[16];
	Functions <int> *INT	=	new	Functions<int>;
	Functions <double> *DOUBLE	=	new	Functions<double>;
	Functions <float> *FLOAT	=	new	Functions<float>;
	Functions <char> *CHAR	=	new	Functions<char>;

	arr[0] = (*INT).plus();
	arr[1] = (*INT).minus();
	arr[2] = (*INT).multiplication();
	arr[3] = (*INT).division();
	arr[4] = (*DOUBLE).plus();
	arr[5] = (*DOUBLE).minus();
	arr[6] = (*DOUBLE).multiplication();
	arr[7] = (*DOUBLE).division();
	arr[8] = (*FLOAT).plus();
	arr[9] = (*FLOAT).minus();
	arr[10] = (*FLOAT).multiplication();
	arr[11] = (*FLOAT).division();
	arr[12] = (*CHAR).plus();
	arr[13] = (*CHAR).minus();
	arr[14] = (*CHAR).multiplication();
	arr[15] = (*CHAR).division();
	
	histogram(arr);

	delete	INT;
	delete	DOUBLE;
	delete	FLOAT;
	delete	CHAR;

	system ("pause");
	return (0);
}