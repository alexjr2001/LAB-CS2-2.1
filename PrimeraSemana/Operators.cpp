#include <iostream>

//Learning operators
int main() {
	double num1, num2;
	std::cout << "Ingresa dos numeros: ";
	std::cin >> num1 >> num2;
	std::cout << "Suma " << num1 + num2 << "\nResta " << num1 - num2 << "\nMutiplicación " << num1 * num2 << "\nDivisión " << num1 / num2;
	std::cout << "\nRaiz numero 1 " << sqrt(num1) << "\nRaiz numero 2 " << sqrt(num2) << "\n";
	
	return 0;
}
