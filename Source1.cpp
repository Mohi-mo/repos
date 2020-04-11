#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>

//task 11 (11/04/2020). Print the sum of array elements smaller than the arithmetic mean.

int count, middle;
float sum;

void fileWork() {
	std::ofstream file;
	file.open("result.txt");

	file << std::endl;
	file << "Sum: " << sum << std::endl;
	file << "Middle: " << middle << std::endl;
	file << "Result: " << count << std::endl;

	file.close();
}

int main() {

	const int n = 20;
	int array[n];

	srand(time(NULL));

	for (int i = 0; i < n; i++) {

		array[i] = rand() % 20 - 10;
		std::cout << array[i] << "; ";
		
		sum += array[i];
		middle = (float)sum / n;

		if (array[i] < middle) {
			count += array[i];
		}
	}
	

	std::cout << std::endl;
	std::cout << "Sum: " << sum << std::endl;
	std::cout<<"Middle: " << middle<<std::endl;
	std::cout << "Result: " << count << std::endl;

	fileWork();

	getchar();
	getchar();
	
	return 0;
}