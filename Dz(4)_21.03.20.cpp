#include <iostream>
#include <fstream>
#include <iomanip> 
#include <math.h>

int main() {

	float a,x,res,y,fact; //где а-предел, х-х, у-у, res-промежуточные расчёты, xval-степень х

	
	std::ofstream file;
	file.open("result.txt");

	std::cout << "Enter A & X:";
	std::cin >> a >>x;

	for (int i = 2; i <= a; i++) {
		fact *= i;
		res = (x * x * x) / fact;
		y += res;
	}
	y = x-y;
	std::cout << y << std::endl;
	file << y << std::endl;
	
	std::getchar();
	std::getchar();

	return 0;
}

