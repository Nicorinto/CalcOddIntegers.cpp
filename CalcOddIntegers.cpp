#include <iostream>
using namespace std;

int main() {
	int oddNum{ 1 };
	for (unsigned int i{ 1 }; i <= 15; ++i) {
		if (i % 2 == 1) {
			oddNum *= i;
			cout << "Odd number is " << oddNum << endl;
		}
		
	}
	
}