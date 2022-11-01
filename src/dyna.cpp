#include <iostream>

void test1(){
	for (size_t k = 0 ;k < 0xFFFFFFFE; ++k){
		int* p = new int;
		*p = k;
	}
}
void test2(){
	for (size_t k = 0; k < 0xFFFFFFFE; ++k){
		int* p = new int[k];
		*p = k;
	}
}
void test3(){
	for (size_t k = 0; k < 0xFFFFFFFE; ++k){
		int* p = new int[k];
		*p = k;
		delete[] p;
	}
}


int main(){
	int val = 123;
	int* p = &val;
	
	std::cout <<  *p << std::endl;

	int arr[3] = {1,2,3};

	p = &arr[0];

	std::cout << p << ' ' << * p << std::endl;

	++p;

	std::cout << p << ' ' << * p << std::endl;


	p = new int[10];

	*p = 125;

	std::cout << p << ' ' << * p << std::endl;
	std::cout << &p[2] << ' ' << p[2] << std::endl;
	std::cout << &p[9] << ' ' << p[9] << std::endl;


	size_t Rows = 10;
	size_t Cols = 12;

	int** arr = new int*[Rows];
	for (size_t k = 0; k< 10; ++k)
		arr[k] = new int[Cols];


	for (size_t r = 0; r< Rows; ++r)
		for (size_t c = 0; c < Cols; ++c)
			arr[r][c] = rand()%100;






	++p;
	*p = 126;
	std::cout << p << ' ' << * p << std::endl;

	--p;
	delete[] p;
	
	return 0;
}
