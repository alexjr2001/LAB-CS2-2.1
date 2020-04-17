#include<iostream>
#include <cmath>

int main() {
	int num1, num2;
	char signo;

	std::cout << "Elija su operador:\na) (+) - suma\nb) (-) - resta\nc) (*) - multiplicación\nd) (/) - división\ne) (%) - residuo\nf) (~) - raíz cuadrada\n";
	std::cin >> signo;

	if (signo != '~') {
		std::cout << "\nIngrese dos operandos\n";
		std::cin >> num1 >> num2;
		
		if (signo == '+') {
			std::cout << "\nSu suma es: " << num1 + num2;
		}
		else if (signo == '-') {
			std::cout << "\nSu resta es " << num1 - num2;
		}
		else if (signo == '*') {
			std::cout << "\nSu multiplicacion es " << num1 * num2;
		}
		else if (signo == '/') {
			if (num2 != 0) {
				std::cout << "\nSu division es " << num1/num2;
			}
			else {
				std::cout << "\nSu divisor es 0";
			}
		}
		else if (signo == '%') {
			if (num2 != 0) {
				std::cout << "\nResiduo es " << num1 % num2;
			}
			else {
				std::cout << "\nNo se puede, tiene divisor 0";
			}
		}
	}
	else {
		std::cout << "\nIngrese un numero para la raiz cuadrada\n";
		std::cin >> num1;
		std::cout << "\nSu raíz cuadrada es" << sqrt(num1);
	}

	return 0;

}