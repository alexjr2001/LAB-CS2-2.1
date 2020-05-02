#include <iostream>

int main() {
	bool play = true;

	char tabla1[50] = "\t\t\t\t|\t|\t\n\t\t\t    ";											//Partes de la tabla 
	char tabla2[50] = "   |   ";
	char tabla3[50] = "\t\t\t________|_______|________\n\t\t\t\t|\t|\t\n\t\t\t    ";
	char tabla4[50] = "\t\t\t\t|\t|\t\n\t\t\t";

jugar:
	system("CLS");

	std::string v1 = " ", v2 = " ", v3 = " ", v4 = " ", v5 = " ", v6 = " ", v7 = " ", v8 = " ", v9 = " ";						//Casillas
	bool cas1 = false, cas2 = false, cas3 = false, cas4 = false, cas5 = false, cas6 = false, cas7 = false, cas8 = false, cas9 = false;

	int jugadores;
	std::string player1 = "X";
	std::string player2 = "O";
	int a = (rand() % 2) + 1; //Quien va a comenzar
	char lugar[100] = "\nLugares: \n 1) __| 2) |__| 3) |__ \n 4) __| 5) |__| 6) |__ \n 7)   | 8) |  | 9) |\n\n"; //Leyenda del tablero
	int casilla = 0; //Lugar ingresado
	int i = 1;  //N� TURNO DE LA PC
	int jj = 0;
	int list[] = { 1,3,5,7,2,4,6,8 };
	int list2[] = { 4,6,8,3,7,9,1,2 };
	bool find = false;		//Si la PC encontro el valor
	bool win = false;
	int comienza = 1;
	
	std::cout << "BIENVENIDO A TRES EN RAYA\n\n"; //Men�
	std::cout << "�Cuantos jugadores (1 o 2)?: ";
	std::cin >> jugadores;
	if (jugadores == 2) {     //Multijugador
		std::cout << "Ingrese su signo jugador 1\n";
		std::cin >> player1;
		std::cout << "Ingrese su signo jugador 2\n";
		std::cin >> player2;
		std::cout << "\nComienza el jugador " << a << "\n";
		std::cout << lugar;
		std::cout << tabla1 << v1 << tabla2 << v2 << tabla2 << v3 << "\n" << tabla3 << v4 << tabla2 << v5 << tabla2 << v6 << "\n" << tabla3 << v7 << tabla2 << v8 << tabla2 << v9 << "\n" << tabla4;
	}
	else if (jugadores == 1) { 
		std::cout << "\nVa a jugar contra la PC\n"; //Contra la PC puede elegir signo
		std::cout << "Elija su signo: ";
		std::cin >> player1;
		if (a == 1) {
			std::cout << "\nUsted comienza\n";
			std::cout << lugar;
			std::cout << tabla1 << v1 << tabla2 << v2 << tabla2 << v3 << "\n" << tabla3 << v4 << tabla2 << v5 << tabla2 << v6 << "\n" << tabla3 << v7 << tabla2 << v8 << tabla2 << v9 << "\n" << tabla4;
		}
		comienza = a;
	}
	if (player1 == player2) { //Para que signos no sean iguales
		player2 = "X";
		if (player2 == player1) {
			player2 = "O";
		}
	}

	while (play){
		if (jugadores == 2) {  
				std::cout << "\nJugador 1: " << player1 << "\nJugador 2: " << player2 << "\n";
				std::cout << "\nLe toca a jugador " << 2-(a%2);
				std::cout << "\nIngrese la casilla (numero): ";
				std::cin >> casilla;
				system("cls");
		}
		//CONTRA LA PC
		//Imposible ganar
		else if (jugadores == 1) {   //PC nunca perder�
			if (a % 2 == 1) {
					std::cout << "\nEs su turno (" << player1 << ")\n";
					std::cout << "\nIngrese la casilla (numero): ";
					std::cin >> casilla;
				}
			else if (i == 1) {				//Primer turno de la pc
					if (cas5) {
						casilla = 1;
					}
					else {
						casilla = 5;
					}
					i += 1;
				}
			else if (i > 1) {	//Los dem�s turnos de la PC para que no pierda
					if ((v7 == v9 && cas7 || v2 == v5 && cas2) && win == false) {
						if (cas8 == false && (v2 == player2 && v2 == v5 || v7 == player2 && v7 == v9)) {
							casilla = 8;
							find = true;
							win = true;
						}
						else if (cas8 == false) {
							casilla = 8;
							find = true;
						}

					}
					if ((v1 == v3 && cas1 || v5 == v8 && cas5) && win == false) {
						if (cas2 == false && (v1 == v3 && v1 == player2 || v5 == v8 && v5 == player2)) {
							casilla = 2;
							find = true;
							win = true;
						}
						else if (cas2 == false) {
							casilla = 2;
							find = true;
						}
					}
					if ((v3 == v9 && cas3 || v4 == v5 && cas4) && win == false) {
						if (cas6 == false && (v3 == v9 && v3 == player2 || v4 == v5 && v5 == player2)) {
							casilla = 6;
							find = true;
							win = true;
						}
						else if (cas6 == false) {
							casilla = 6;
							find = true;
						}
					}
					if ((v1 == v7 && cas1 || v6 == v5 && cas5) && win == false) {
						if (cas4 == false && (v1 == v7 && v1 == player2 || v6 == v5 && v5 == player2)) {
							casilla = 4;
							find = true;
							win = true;
						}
						else if (cas4 == false) {
							casilla = 4;
							find = true;
						}
					}
					if ((v3 == v2 && cas3 || v7 == v4 && cas4 || v5 == v9 && cas5) && win == false) {
						if (cas1 == false && (v3 == v2 && v2 == player2 || v7 == v4 && v7 == player2|| v5 == v9 && v5 == player2)) {
							casilla = 1;
							find = true;
							win = true;
						}
						else if (cas1 == false) {
							casilla = 1;
							find = true;
						}
					}
					if ((v3 == v6 && cas3 || v7 == v8 && cas8 || v1 == v5 && cas1) && win == false) {
						if (cas9 == false && (v3 == v6 && v3 == player2 || v7 == v8 && v7 == player2 || v1 == v5 && v1 == player2)) {
							casilla = 9;
							find = true;
							win = true;
						}
						else if (cas9 == false) {
							casilla = 9;
							find = true;
						}
					}
					if ((v8 == v9 && cas8 || v1 == v4 && cas1 || v3 == v5 && cas3) && win == false) {
						if (cas7 == false && (v8 == v9 && v8 == player2 || v1 == v4 && v4 == player2 || v3 == v5 && v3 == player2)) {
							casilla = 7;
							find = true;
							win = true;
						}
						else if (cas7 == false) {
							casilla = 7;
							find = true;
						}
					}
					if ((v1 == v2 && cas1 || v9 == v6 && cas6 || v5 == v7 && cas5) && win == false) {
						if (cas3 == false && (v1 == v2 && v2 == player2 || v5 == v7 && v5 == player2 || v9 == v6 && v6 == player2)) {
							casilla = 3;
							find = true;
							win = true;
						}
						else if (cas3 == false) {
							casilla = 3;
							find = true;
						}
					}
					if (v5 == v9 && cas1 && cas5 && i == 2 && find == false) {
						if (cas3 == false) {
							casilla = 3;
							find = true;
						}
					}
					if (find == false) {
						if (comienza == 1) {
							casilla = list2[jj];
							jj++;
							if (jj > 7) {
								jj = 0;
							}
						}
						else {
							casilla = list[jj];
							jj++;
							if (jj > 7) {
								jj = 0;
							}
						}
					}
					i += 1;
			}
			system("CLS");
		}

		switch (casilla) {				//Coloca el signo correspondiente en el lugar indicado "casilla"
		case 1:
			if (cas1 == false) {
				if (a % 2 == 1) {
					v1 = player1;
				}
				else {
					v1 = player2;
				}
				cas1 = true;
			}
			else {
				std::cout << "Ya est� ese valor, intentelo de nuevo";
				a -= 1;
			}
			break;
		case 2:
			if (cas2 == false) {
				if (a % 2 == 1) {
					v2 = player1;
				}
				else {
					v2 = player2;
				}
				cas2 = true;
			}
			else {
				std::cout << "Ya est� ese valor, intentelo de nuevo";
				a -= 1;
			}
			break;
		case 3:
			if (cas3 == false) {
				if (a % 2 == 1) {
					v3 = player1;
				}
				else {
					v3 = player2;
				}
				cas3 = true;
			}
			else {
				std::cout << "Ya est� ese valor, intentelo de nuevo";
				a -= 1;
			}
			break;
		case 4:
			if (cas4 == false) {
				if (a % 2 == 1) {
					v4 = player1;
				}
				else {
					v4 = player2;
				}
				cas4 = true;
			}
			else {
				std::cout << "Ya est� ese valor, intentelo de nuevo";
				a -= 1;
			}
			break;
		case 5:
			if (cas5 == false) {
				if (a % 2 == 1) {
					v5 = player1;
				}
				else {
					v5 = player2;
				}
				cas5 = true;
			}
			else {
				std::cout << "Ya est� ese valor, intentelo de nuevo";
				a -= 1;
			}
			break;
		case 6:
			if (cas6 == false) {
				if (a % 2 == 1) {
					v6 = player1;
				}
				else {
					v6 = player2;
				}
				cas6 = true;
			}
			else {
				std::cout << "Ya est� ese valor, intentelo de nuevo";
				a -= 1;
			}
			break;
		case 7:
			if (cas7 == false) {
				if (a % 2 == 1) {
					v7 = player1;
				}
				else {
					v7 = player2;
				}
				cas7 = true;
			}
			else {
				std::cout << "Ya est� ese valor, intentelo de nuevo";
				a -= 1;
			}
			break;
		case 8:
			if (cas8 == false) {
				if (a % 2 == 1) {
					v8 = player1;
				}
				else {
					v8 = player2;
				}
				cas8 = true;
			}
			else {
				std::cout << "Ya est� ese valor, intentelo de nuevo";
				a -= 1;
			}
			break;
		case 9:
			if (cas9 == false) {
				if (a % 2 == 1) {
					v9 = player1;
				}
				else {
					v9 = player2;
				}
				cas9 = true;
			}
			else {
				std::cout << "Ya est� ese valor, intentelo de nuevo";
				a -= 1;
			}
			break;
		default:
			std::cout << "Ingresaste dato incorrecto, intenta otra vez";
			a -= 1;
			break;
		}
		
		find = false;		 //Prepara el siguiente turno de la PC
		win = false;
		
		std::cout << lugar;
		std::cout << "\t\t\t\tTRES EN RAYA\n\n";
		std::cout << tabla1 << v1 << tabla2 << v2 << tabla2 << v3 << "\n" << tabla3 << v4 << tabla2 << v5 << tabla2 << v6 << "\n" << tabla3 << v7 << tabla2 << v8 << tabla2 << v9 << "\n" << tabla4;

		//Verificar si alguien gan�
		if (cas1 == true && v1 == v2 && v2 == v3 || cas1 == true && v1 == v5 && v5 == v9 || cas1 == true && v1 == v4 && v1 == v7 || cas2 == true && v2 == v5 && v5 == v8 || cas6 == true && v3 == v6 && v6 == v9 || cas3 == true && v3 == v5 && v5 == v7 || cas7 == true && v7 == v8 && v8 == v9 || cas5 == true && v4 == v5 && v5 == v6) {
			if (jugadores == 1) {
				if (a % 2 == 1) {
					std::cout << "Gan� jugador 1";
				}
				else {
					std::cout << "Gan� PC";
				}
			}
			else {
				if (a % 2 == 1) {
					std::cout << "Gan� jugador 1";
				}
				else {
					std::cout << "Gan� jugador 2";
				}
			}
			play = false;
			std::cout << "\nPlay Again? Si(1) No(0): "; //Para jugar de nuevo
			std::cin >> play;
			if (play) {
				goto jugar;
			}
		}
		else if (cas1 == true && cas2 == true && cas3 == true && cas4 == true && cas5 == true && cas6 == true && cas7 == true && cas8 == true && cas9 == true) {
			std::cout << "Empate";
			play = false;
			std::cout << "\nPlay Again? Si(1) No(0): "; //Para jugar de nuevo
			std::cin >> play;
			if (play) {
				goto jugar;
			}
			
		}
		a += 1;
	}
	return 0;
}
