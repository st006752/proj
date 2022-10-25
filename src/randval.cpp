#include <iostream>

int main(){
	for (size_t k = 0;k < 5 ;++k)
		std::cout << rand() << std::endl;
	std::cout << "---------------" << std::endl;
	srand(time(0));
	for (size_t k = 0;k < 5 ;++k)
		std::cout << rand() << std::endl;

	
	return 0;
}
