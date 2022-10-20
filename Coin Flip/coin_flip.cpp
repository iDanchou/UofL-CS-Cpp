#include <iostream>
#include <ctime>

using namespace std;

int main() {

	// create a number 0 or 1
	srand(time(NULL));
	int coin = rand() % 2;

	// if number is 0 == HEADS
	// if number is 1 == TAILS

	if (coin == 0) {
		cout << "HEADS" << endl;
	}
	else {
		cout << "TAILS" << endl;
	}

	return 0;
}