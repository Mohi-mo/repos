#include <iostream>
#include <fstream>
#include <iomanip> 
#include <math.h>

int main() {

	float a,x,res,y; //где а-предел, х-х, у-у, res-промежуточные расчёты

	
	std::ofstream file;
	file.open("result.txt");

	std::cout << "Enter A & X:";
	std::cin >> a>>x;

	for (int i = 7; i < a; i=i+3) {
		for (int j = 3; j <= i+1; j++) {
			res = j / (i * x);
			y += res;
		}
	}
	
	std::cout << y << std::endl;
	file << y << std::endl;
	
	std::getchar();
	std::getchar();

	return 0;
}

