#include<iomanip>
#include<iostream>
#include <limits>
#include <wchar.h>
#include <math.h> 

int main()
{
	float f = atof("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
	std::cout << f << std::endl;
	f = atof("nan");
	std::cout << f << std::endl;
	
}
