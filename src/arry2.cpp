#include <iostream>

template<size_t rowsize,size_t colsize>
void printarray2(int (&arr)[rowsize][colsize]){
	for  (size_t r = 0; r < rowsize;++r){
		for  (size_t c = 0; c < colsize; ++c)
			std::cout << arr[r][c]  << ' ' ;

		std::cout << std::endl;
	}
}

void printarray2(int **arr , size_t rowsize, size_t colsize){
	for  (size_t r = 0; r < rowsize;++r){
		for  (size_t c = 0; c < colsize; ++c)
			std::cout << arr[r][c]  << ' ' ;
		std::cout << std::endl;
	}
}
/*
void fillarray2(int arr[] ,size_t rowsize,size_t colsize){
	srand(time(0));
	for (size_t k = 0; k < arrsi;++k)
		arr[k] = rand()%100;
}
*/
int main(){
	const size_t rowsize = 3;
	const size_t colsize = 2;

	int arr2[rowsize][colsize] = {{1,2},{3,4},{5,6}};

	std::cout << "Sizeof arr2  " << sizeof(arr2) << std::endl;

	int * rows[3] = {&arr2[0][0],&arr2[1][0],&arr2[2][0]};
	printarray2(rows,rowsize,colsize);

	printarray2(arr2);

	srand(time(0));
	for (size_t r = 0; r < rowsize; ++r)
		for (size_t c = 0; c < colsize; ++c)
			arr2[r][c] = rand()%100;
	//fillarray2(arr2,rowsize,colsize);
	//printarray2(arr2,rowsize,colsize);

	return 0;
}
