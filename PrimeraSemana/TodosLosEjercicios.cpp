
#include <iostream>
#include <string>

//Primer Ejercicio
int main() {
	std::string nombre, direccion, hobby;
	int edad, telefono;

	std::cout << "Cual es tu nombre? ";
	std::cin >> nombre;
	std::cout << "Tu Edad: ";
	std::cin >> edad;
	std::cout << "Ingresa tu telefono: ";
	std::cin >> telefono;
	std::cout << "Ingresa tu direccion: ";
	std::cin >> direccion;
	std::cout << "Ingresa tu hobby: ";
	std::cin >> hobby;

	std::cout << "\nTu nombre es: " << nombre;
	std::cout << "\nTu edad es: " << edad;
	std::cout << "\nTu telefono es: " << telefono;
	std::cout << "\nTu direcci�n es: " << direccion;
	std::cout << "\nTu hobby es: " << hobby;

	return 0;

}

//Segundo ejercicio
#include <iostream>

int main() {
	double num1, num2;
	std::cout << "Ingresa dos numeros: ";
	std::cin >> num1 >> num2;
	std::cout << "Suma " << num1 + num2 << "\nResta " << num1 - num2 << "\nMutiplicaci�n " << num1 * num2 << "\nDivisi�n " << num1 / num2;
	std::cout << "\nRaiz numero 1 " << sqrt(num1) << "\nRaiz numero 2 " << sqrt(num2) << "\n";

	return 0;
}

//Tercer ejercicio
#include <iostream>

int main() {
	double radio, base, altura, lado;
	std::string fig;
	std::cout << "Area de que figura quiere hallar? circulo, triangulo o cuadrado? ";
	std::cin >> fig;
	if (fig == "circulo") {
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