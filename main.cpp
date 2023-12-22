#include <iostream>
#include <vector>

// this is a comment

int main(int argc, const char* argv[]) {
	std::vector<int> ints = {0, 1, 2, 3, 4, 5};
	std::cout << "This is the output!!" << std::endl;
	for (int i = 0; i < ints.size(); i++) {
		std::cout << "ints: " << ints[i] << std::endl;
	}
	return 0;
}