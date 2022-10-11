#include <iostream>
#include <iomanip>

int main(){
	std::cout << "sizeof(float) = " << sizeof(float) << std::endl;
	std::cout << "sizeof(double) = " << sizeof(double) << std::endl;
	std::cout << "sizeof(size_t) = " << sizeof(size_t) << std::endl;
	std::cin.get();
	unsigned counter = 1;
	unsigned counterprev = counter;
	float S = 1.0;
	float Sprev = 0;
	bool negate = true;
	
	while ( S!= Sprev ){
		Sprev = S;
		counterprev = counter;
		counter += 2;
		if ( counter < counterprev ) {
			std::cout << "Counter elapsed" << std::endl;
			break;
		}
		S += (negate?-1.0:1.0)/counter;
		negate = !negate;
		if ( counter%100000001 == 0 )
			std::cout << "Counter = " << counter << std::endl;
	}
	std::cout << "counter = " << counter << std::endl;
	std::cout << "S = " << S << std::endl;
	std::cout << std::setprecision(16) <<  "4*S = " << 4*S << std::endl;
 	/*unsigned nrows = 0;
	std::cin >> nrows;
	for (unsigned k = 0; k < nrows;++k)
		std::cout << '*' << std::endl;
	*/
	return 0;
}
