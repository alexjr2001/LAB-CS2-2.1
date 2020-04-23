#include <iostream>
#include <cmath>

int main() {
	double l1, l2, l3, h;
	double a1, a2;
	double pitagoras;
	double a, b, alpha, beta;
	double var, x;
	double sen1, cos1, tan1, sen2, cos2, tan2;
	
	std::cout << "BIENVENIDO";
//Reinicio:
	std::cout << "\n\nIngrese datos (Ponga 0 si no lo sabe)\n"; //Pedir datos
	std::cout << "Lado 1: ";
	std::cin >> l1;
	std::cout << "Lado 2: ";
	std::cin >> l2;
	std::cout << "Lado 3: ";
	std::cin >> l3;

	std::cout << "Angulo 1:";
	std::cin >> a1;
	std::cout << "Angulo 2:";
	std::cin >> a2;


	if (l2 + l1 + l3<= 0) {                                                     //Comprobar datos
		std::cout << "Ingrese al menos dos datos,inténtelo de nuevo\n";
		if (a1 > 0 && a2 > 0) {
			std::cout << "E ingrese al menos un lado\n";
			if (a1 + a2 > 90) {
				std::cout << "Nota: Suma de los angulos debe ser 90\n";
			}
		}
		//goto Reinicio;															//Para ir al inicio
	}
	else if (a1 + a2 <= 0 && l1 + l2 <= 0 || a1 + a2 <= 0 && l1 + l3 <= 0 || a1 + a2 <= 0 && l2 + l3 <= 0) {
		std::cout << "Ingrese dos datos, no se puede calcular con un solo lado";
	}

	else {
		h = l3;
		if (l1 > l2&& l1 > l3) {							//Encontrar la hipotenusa
			h = l1;
			l1 = l3;
		}
		else if (l2 > l1&& l2 > l3) {
			h = l2;
			l2 = l3;
		}
		double newVar = h * h;                            //Para pitagoras

		if (a1+a2>90 && a1<90 && a2<90|| a1 > 0 && a2 > 0 && a1+a2!=90) {						//Si ingresa angulos erroneos
			a1 = 90 - a2;
			std::cout << "Has ingresado angulos incorrectos pero el resultado más próximo es el siguiente: \n";	
		}
		else if (a1 >= 90 || a2 >= 90) {
			a1 = 89;
			a2 = 1;
			std::cout << "Has ingresado angulos incorrectos pero el resultado más próximo es el siguiente: \n";
		}

		//LADOS
		if (l2 + l1 <= 0) {							//Si ingresa 1 lado
			if (a1 <= 0 && a2 > 0) {
				a1 = 90 - a2;
			}
			if (a2 <= 0 && a1 > 0) {
				a2 = 90 - a1;
			}
			x = a1 * 50 / 90;
			l1 = h * x / 50;
			x = 100 - (50 + x);
			l2 = h * x / 50;
		}

		else if (l1 <= 0) {
			var = h * h - l2 * l2;
			l1 = sqrt(var);
		}

		else if (l2 <= 0) {
			var = h * h - l1 * l1;
			l2 = sqrt(var);
		}

		//Ángulos
		if (a1 <= 0 && a2 <= 0) {
			x = l1 * 100 / (l2 + l1);
			a1 = 90 * x / 100;
			x = l2 * 100 / (l2 + l1);
			a2 = 90 * x / 100;
		}
		else if (a1 <= 0) {
			a1 = 90 - a2;
		}
		else if (a2 <= 0) {
			a2 = 90 - a1;
		}

	NuevosValores:
		//CATETOS Y ANGULOS
		a = l2;
		b = l1;
		if (l2 < l1) {
			a = l1;
			b = l2;
		}
		alpha = a1;
		beta = a2;
		if (a1 < a2) {
			alpha = a2;
			beta = a1;
		}

		// sen, cos y tan
		sen1 = l1 / h;
		cos1 = l2 / h;
		tan1 = l1 / l2;
		sen2 = l2 / h;
		cos2 = l1 / h;
		tan2 = l2 / l1;

		//PARTE FINAL
		pitagoras = l1 * l1 + l2 * l2;
		double perimetro = h + l1 + l2;
		double area = l1 * l2 / 2;


		if (newVar == pitagoras) {
			std::cout << "Si es triangulo cuadrado\n";
			std::cout << "Cateto mayor: " << a << "\nCateto menor: " << b << "\nHipotenusa: " << h << "\nAngulo mayor: " << alpha << "\nAngulo menor: " << beta;
			std::cout << "\nsen(" << a1 << "): " << sen1 << ", cos(" << a1 << "): " << cos1 << ", tan(" << a1 << "): " << tan1;
			std::cout << "\nsen(" << a2 << "): " << sen2 << ", cos(" << a2 << "): " << cos2 << ", tan(" << a2 << "): " << tan2;
			std::cout << "\nArea: " << area << "\nPerimetro: " << perimetro << std::endl;
			 //Dibujo 
			if (b > 8) {
				b = 8;
				a = 8;
			}
			else if (a > 8) {
				a = 8;
			}
			double i = b;
			int  j = 1;
			int  limite = 1;
			if (b + a >= 4) {
				while (i > 1) {
					std::cout << "\n@";
					while (j < limite) {
						std::cout << "*";
						j++;
					}
					limite++;
					j = 1;
					i--;
					std::cout << "\\";
				}
				std::cout << "\n";
				if (b == 1) {
					std::cout << "\n@*--\n";
				}
				for (int ii = 0; ii < a; ii++) {
					
					std::cout << "@";
				}
			}
			else {
				std::cout << "\n@" << "\n@@";
			}
		}
		else {
			std::cout << "No es triangulo cuadrado\n" << "Pero los valores más cercanos para que lo sea son los siguientes\n";
			newVar = l2 * l2 + l1 * l1;
			h = sqrt(newVar);
			goto NuevosValores;     //Para no repetir el mismo codigo
		}
	}

	return 0;
}


