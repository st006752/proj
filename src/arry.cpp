#include <iostream>

void printarray(int arr[], size_t arrsi){
	for  (size_t k = 0; k< arrsi;++k)
		std::cout << arr[k] << ' ' ;
	std::cout << std::endl;
}
void fillarray(int arr[] ,size_t arrsi){
	srand(time(0));
	for (size_t k = 0; k < arrsi;++k)
		arr[k] = rand()%100;
}
void  shiftarray(int arr[], size_t arrsi,int shift){
	shift %= arrsi;
	if ( shift > 0 ){
		for (int s = 0;s < shift;++s){
			int  tmp = arr[arrsi-1];
			for (size_t k = arrsi-1; k != 0;--k)
				arr[k] = arr[k-1];
				arr[0] = tmp;
		}
	}

}

void  someFun(int sz){
	int arr[sz];
	fillarray(arr,sz);
	int sum = 0;

	for (int k = 0; k < sz;++k)
		sum += arr[k];
	std::cout << "sum = " << sum << std::endl;
}

int main(){
//	const size_t arrsize = 10;
//	int arr[arrsize];
//	fillarray(arr,arrsize);
//	printarray(arr,arrsize);\

	int shift = 0;
	std::cin >> shift;

	//arr = &shift;

//	shiftarray(arr,arrsize,shift);
//	printarray(arr,arrsize);
	
//	std::cin >> shift; 

	someFun(shift);
	return 0;
}
