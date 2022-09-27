#include <iostream>

int main(){
	unsigned nrows = 0;
	std::cin >> nrows;
	for (unsigned k = 0; k < nrows;++k)
		std::cout << '*' << std::endl;
	return 0;
}
