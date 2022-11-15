#include <iostream>
#include <fstream>

int main(){
	size_t arrsi = 0;
//	std::cout << "Input array size" << std::endl;
//	std::cin >> arrsi;

	int*  arr = nullptr; 
//new int[arrsi];
// 	for (size_t k = 0; k< arrsi;++k)
//		arr[k] = rand()%100;

	std::fstream fs;
	fs.open("filename");
	if ( fs.is_open() ){
//		for (size_t k = 0; k < arrsi; ++k )
//			fs << arr[k] << ' ';
		while (!fs.eof()){
			 int tmp;
			fs >> tmp;
			if ( arr == nullptr ){
				arr = new int[1];
				arr[0] = tmp;
				++arrsi;
			}
			else{
				int* newarr = new int[arrsi];
				for (size_t k = 0; k< arrsi-1;++k)
					newarr[k] = arr[k];
				newarr[arrsi-1] = tmp;
				delete[] arr;
				arr = newarr; 
			}

		fs.close();
	}
	else {
		std::cout << "Can't open file " << std::endl;
		return 1; 
	}
	return 0;
}
