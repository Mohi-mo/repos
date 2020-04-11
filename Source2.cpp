#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>

//task 13 (11/04/2020). Increase all negative elements by 5, and positive decrease by 1.

int newar1, newar;
float sum;

void fileWork() {
	std::ofstream file;
	file.open("result.txt");

	file << std::endl;
	file << "Newarray0: " << " \t<**{ " << newar << " }**> \t" << std::endl;
	file << "Newarray1: " << " \t***[ " << newar1 << " ]*** \t" << std::endl;

	file.close();
}

int main() {

	const int n = 20;
	int array[n];

	srand(time(NULL));

	for (int i = 0; i < n; i++) {

		array[i] = rand() % 20 - 10;
		std::cout <<" \t(" << array[i]<< ") \t";
		
		if (array[i] > 0) {
			array[i] = array[i] - 1;
			newar = array[i];
			std::cout<<" \t<**{ " << newar << " }**> \t"<<std::endl;
		}
		else {
			array[i] = array[i] + 5;
			newar1 = array[i];
			std::cout <<" \t***[ " <<newar1 << " ]*** \t"<<std::endl;
		}

	}
	
	std::cout << std::endl;;

	fileWork();

	getchar();
	getchar();
	
	return 0;
}