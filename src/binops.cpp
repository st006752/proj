#include <iostream>

#define DEBUG_1

int main(){
	unsigned ui = 0;
	std::cin >> ui;
	std::cout << "ui = " << ui << std::endl;
	std::cout << "ui & 1 = " << (ui&1) << std::endl;
	std::cout << "ui & 0b10 = " << (ui & (1 << 1) ) << std::endl;
	std::cout << "ui & 0b10 = " << (ui & 0b10 ) << std::endl;
#ifdef DEBUG_2
 std::cout << "Another debug message" << std::endl;
#endif

	std::cout << "ui | 0b10 = " <<  ( ui|0b10 ) << std::endl;
	std::cout << "ui ^ 0b10 = " << ( ui^0b10 )  << std::endl;


	unsigned mask  = 1;
	std::cout << "mask  = " << mask << std::endl;
	std::cout << "mask << 4 = " << (mask<<4) << std::endl;
	std::cout << "(mask<<4) - 1 = " << ( (mask<<4)-1 ) << std::endl;

#ifdef DEBUG_1
	std::cout << "In debug mode " << std::endl;
#endif
	

	return 0;
}
