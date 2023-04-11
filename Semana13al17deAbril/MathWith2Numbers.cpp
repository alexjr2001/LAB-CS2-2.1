#include <iostream>

//Different mathematical operations with two numbers
int main() {
	int num1, num2;

	std::cout << "Ingrese dos números enteros:\n";
	std::cin >> num1 >> num2;

	std::cout << "\nSu suma es: " << num1 + num2;
	std::cout << "\nLa resta entre el primer y segundo es " << num1 - num2;
	std::cout << "\nLa multiplicacion es: " << num1 * num2;
	if (num2 != 0) {
		std::cout << "\nLa división es: " << num1 / num2;
		std::cout << "\nEl residuo de la división es " << num1 % num2;
	}
	else {
		std::cout << "\nNo se puede hacer una división con divisor 0";
	}


	if (num1 > num2) {
		std::cout << "\nEl mayor es: " << num1;
		std::cout << "\nEl menor es: " << num2;
	}
	else if (num1 == num2) {
		std::cout << "\nSon iguales";
	}
	else {
		std::cout << "\nEl mayor es: " << num2;
		std::cout << "\nEl menor es: " << num1;
	}

	if (num2 != 0 && num1!=0) {
		if (num1 % num2 == 0 || num2 % num1 == 0) {
			std::cout << "\nUn número es divisor del otro";
		}
		else {
			std::cout << "\nNinguno de los dvisores es divisor del otro";
		}
	}
	else {
		std::cout << "\nNo son divisores porque un numero es 0";
	}

	return 0;

}
