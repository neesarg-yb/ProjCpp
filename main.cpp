#include <iostream>
#include "src/misc.h"

int main()
{
	int input = -1;

	std::cin >> input;
	std::cout << "Hello, world!" << std::endl;
	Misc::Print();

	char c;
	std::cin >> c;
	return 0;
}
