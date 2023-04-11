#include <iostream>

//Finding areas of geometric figures
int main(){
	double radio,base,altura, lado;
	std::string fig;
	std::cout << "Area de que figura quiere hallar? circulo, triangulo o cuadrado? ";
	std::cin >> fig;
	if (fig == "circulo"){
		std::cout << "Ingrese el radio: ";
		std::cin >> radio;
		std::cout << "\nSu area es: " << (radio * radio) * 3.14159265359;

	}
	if (fig == "triangulo") {
		std::cout << "Ingrese su base: ";
		std::cin >> base;
		std::cout << "\nIngrese su altura: ";
		std::cin >> altura;
		std::cout << "\nSu area es: " << (base * altura) / 2;
	}
	if (fig == "cuadrado") {
		std::cout << "\nIngrese el lado del cuadrado: ";
		std::cin >> lado;
		std::cout << "Su area es: " << lado * lado;
	}
	
}
