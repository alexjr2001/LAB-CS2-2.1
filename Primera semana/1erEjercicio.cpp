#include <iostream>
#include <string>

//Primer Ejercicio
int main() {
	std::string nombre,direccion, hobby;
	int edad, telefono; 

	std::cout <<"Cual es tu nombre? ";
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
	std::cout << "\nTu dirección es: " << direccion; 
	std::cout << "\nTu hobby es: " << hobby;

	return 0;

}
