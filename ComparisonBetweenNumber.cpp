#include<iostream>

int main() {

	int n1;
	int n2;
	int n3;
	std::cout << "enter three numbers: ";
	std::cin >> n1;
	std::cin >> n3;
	std::cin >> n2;

	int sum = n1 + n2+n3;
	std::cout << "Sum is : " << sum << std::endl;

	int product = n1 * n2*n3;
	std::cout << "Product is: " << product << std::endl;

	int average = (n1+n2+n3)/3;
	std::cout << "average is: " << average << std::endl;

	int small;

	if (n1 <= n2 || n1 <= n3)
		small = n1;
	else if (n2 <= n1 || n2 <= n3)
		small = n2;
	else
		small = n3;
	std::cout << "Smallest is: " << small<< "\n";

	


	int largest=0;

	if (n1 >= n2 || n1 >= n3)
		largest = n1;
	else if (n2 >= n1 || n2 >= n3)
		largest = n2;
	else
		largest = n3;
	std::cout << "Largest is: " << largest<<"\n";
}