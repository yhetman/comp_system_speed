#ifndef TEMPLATE_HPP_
# define TEMPLATE_HPP_
 
# include <iostream>
# include <ctime>
# include <cmath>
# include <iomanip>

# define max(x,y) ((x) > (y)) ? (x) : (y);

using namespace std;

template <typename T>
class	Functions
{	
private:
	double Timer;
	clock_t before_empty;
	clock_t after_empty;
	clock_t before;
	clock_t after;
	long long	n = 1000000;
public:
	Functions(): Timer(0), before_empty(0), after_empty(0), before(0), after(0) {};
	
	float	empty()
	{
		T x0 = 1, x1 = 2, x2 = 3, x3 = 5, x4 = 6,
		x5 = 7, x6 = 8, x7 = 9, x8 = 10, x9 = 11,
		x10 = 12, x11 = 13, x12 = 14, x13 = 15,
		x14 = 16, x15 = 17, x16 = 18, x17 = 19,
		x18 = 20, x19 = 21;
		before_empty = clock();
		for(int i = 0; i < n; i++)
		{
			x0 = x1;
			x1 = x2;
			x2 = x3;
			x3 = x4;
			x4 = x5;
			x5 = x6;
			x6 = x7;
			x7 = x8;
			x8 = x9;
			x9 = x10;
			x10 = x11;
			x11 = x12;
			x12 = x13;
			x13 = x14;
			x14 = x15;
			x15 = x16;
			x16 = x17;
			x17 = x18;
			x18 = x19;
			x19 = x0;
		}
		after_empty = clock();
		return ((float)(after_empty - before_empty));
	}

	float	plus()
	{
		T  x0 = 1, x1 = 2, x2 = 3, x3 = 5, x4 = 6,
		x5 = 7, x6 = 8, x7 = 9, x8 = 10, x9 = 11,
		x10 = 12, x11 = 13, x12 = 14, x13 = 15,
		x14 = 16, x15 = 17, x16 = 18, x17 = 19,
		x18 = 20, x19 = 21;
		before = clock();
		for(int i = 0; i < n; i++)
		{
			x0 = x1 + x2;
			x1 = x2 + x3;
			x2 = x3 + x4;
			x3 = x4 + x5;
			x4 = x5 + x6;
			x5 = x6 + x7;
			x6 = x7 + x8;
			x7 = x8 + x9;
			x8 = x9 + x10;
			x9 = x10 + x11;
			x10 = x11 + x12;
			x11 = x12 + x13;
			x12 = x13 + x14;
			x13 = x14 + x15;
			x14 = x15 + x16;
			x15 = x16 + x17;
			x16 = x17 + x18;
			x17 = x18 + x19;
			x18 = x0 + x1;
			x19 = x1 + x2;
		}
		after = clock();
		Timer = 20 * n / (((after - before) - empty()) / CLOCKS_PER_SEC);
		return (Timer);
	}

	float	minus()
	{
		T  x0 = 1, x1 = 2, x2 = 3, x3 = 5, x4 = 6,
		x5 = 7, x6 = 8, x7 = 9, x8 = 10, x9 = 11,
		x10 = 12, x11 = 13, x12 = 14, x13 = 15,
		x14 = 16, x15 = 17, x16 = 18, x17 = 19,
		x18 = 20, x19 = 21;
		before = clock();
		for(int i = 0; i < n; i++)
		{
			x0 = x1 - x2;
			x1 = x2 - x3;
			x2 = x3 - x4;
			x3 = x4 - x5;
			x4 = x5 - x6;
			x5 = x6 - x7;
			x6 = x7 - x8;
			x7 = x8 - x9;
			x8 = x9 - x10;
			x9 = x10 - x11;
			x10 = x11 - x12;
			x11 = x12 - x13;
			x12 = x13 - x14;
			x13 = x14 - x15;
			x14 = x15 - x16;
			x15 = x16 - x17;
			x16 = x17 - x18;
			x17 = x18 - x19;
			x18 = x0 - x1;
			x19 = x1 - x2;
		}
		after = clock();
		Timer = 20 * n / (((after - before ) - empty())/ CLOCKS_PER_SEC);
		return (Timer);
	}

	float	multiplication()
	{
		T  x0 = 0, x1 = 2, x2 = 3, x3 = 5, x4 = 6,
		x5 = 7, x6 = 8, x7 = 9, x8 = 10, x9 = 11,
		x10 = 12, x11 = 13, x12 = 14, x13 = 15,
		x14 = 16, x15 = 17, x16 = 18, x17 = 19,
		x18 = 20, x19 = 21;
		before = clock();
		for(int i = 0; i < n; i++)
		{
			x0 = x1*x2;
			x1 = x2*x3;
			x2 = x3*x4;
			x3 = x4*x5;
			x4 = x5*x6;
			x5 = x6*x7;
			x6 = x7*x8;
			x7 = x8*x9;
			x8 = x9*x10;
			x9 = x10*x11;
			x10 = x11*x12;
			x11 = x12*x13;
			x12 = x13*x14;
			x13 = x14*x15;
			x14 = x15*x16;
			x15 = x16*x17;
			x16 = x17*x18;
			x17 = x18*x19;
			x18 = x0*x1;
			x19 = x1*x2;
		}
		after = clock();
		Timer = 20 * n / (((after - before) - empty()) / CLOCKS_PER_SEC);
		return (Timer);
	}

	float	division()
	{
		T x0 = 1, x1 = 1, x2 = 1, x3 = 1, x4 = 1,
		x5 = 1, x6 = 1, x7 = 1, x8 = 1, x9 = 1,
		x10 = 1, x11 = 1, x12 = 1, x13 = 1, 
		x14 = 1, x15 = 1, x16 = 1, x17 = 1, 
		x18 = 1, x19 = 1;
		before = clock();
		for(int i = 0; i < n; i++)
		{
			x0 = x1 / x2;
			x1 = x2 / x3;
			x2 = x3 / x4;
			x3 = x4 / x5;
			x4 = x5 / x6;
			x5 = x6 / x7;
			x6 = x7 / x8;
			x7 = x8 / x9;
			x8 = x9 / x10;
			x9 = x10 / x11;
			x10 = x11 / x12;
			x11 = x12 / x13;
			x12 = x13 / x14;
			x13 = x14 / x15;
			x14 = x15 / x16;
			x15 = x16 / x17;
			x16 = x17 / x18;
			x17 = x18 / x19;
			x18 = x0 / x1;
			x19 = x1 / x2;
		}
		after = clock();
		Timer = 20 * n / (((after - before) - empty()) / CLOCKS_PER_SEC);
		return (Timer);
	}
};

void		histogram(float arr[]);

#endif
