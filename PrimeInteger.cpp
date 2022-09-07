#include <iostream>

int main() {

	bool prime[1000];
	int i;
	int j;

	for (i =1 ; i <= 1000; i++) {
		prime[i] = true;
		
	
		for (j = 2; j < i;j++) {

			if (i % j == 0 || i == j) {
				prime[i] = false;
				break;
			}
			if (prime[i]) {
				std::cout << " " << i;
			}

		}

	
	}

}