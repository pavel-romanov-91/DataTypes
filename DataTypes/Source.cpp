#include<iostream>
using namespace std;

//#define BOOLEAN
//#define INTEGRAL_TYPES

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined BOOLEAN
	cout << true << endl;
	cout << false << endl;
#endif


#if define INTEGRAL_TYPES
	//sizeof(type or value)
	cout << "short:\n";
	cout << sizeof(short) << endl;
	cout << SHRT_MIN << "..." << SHRT_MAX << endl;
	cout << 0 << "..." << USHRT_MAX << endl;
#endif
	cout << "float:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << "..." << FLT_MAX << endl;
	cout << endl;

	cout << "double:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << "..." << DBL_MAX << endl;
	cout << endl;
	int a;
	double price;
	double price_of_coffee;

}