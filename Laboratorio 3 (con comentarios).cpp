#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>

using namespace std;

// Declaraciones de funciones
int Operaciones();
int calcularPotencia();
int esPrimo();
int esBisiesto();
void mostrarMenu();

int main() {
    mostrarMenu(); // Muestra el men� principal al iniciar el programa
    return 0;
}

// Funci�n para mostrar el men� y procesar la elecci�n del usuario
void mostrarMenu() {
	system("color 8e");// Cambia el color de fondo y el texto 
	system("cls"); // Limpia la pantalla de la consola
    int opcion;
    cout << "--------------Menu-----------------\n";
    cout << "1. Operaciones Aritmeticas" << endl;
    cout << "2. Calcular potencia de un numero" << endl;
    cout << "3. Determinar si un numero es primo" << endl;
    cout << "4. Determinar si un anio es bisiesto" << endl;
    cout << "5. Salir\n";
    cout << "-----------------------------------\n";
    cout << "Seleccione una opcion: ";
    cin >> opcion;

	// Procesa la opci�n seleccionada
    switch (opcion) {
        case 1:
            Operaciones();
            break;
        case 2:
            calcularPotencia();
            break;
        case 3:
            esPrimo();
            break;
        case 4:
        	esBisiesto();
        	break;
        case 5:
        	system("cls");
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Error. Intente nuevamente." << endl;
            system("pause");
    }

    if (opcion != 5) {
        mostrarMenu();
    } else {
        cout << "Hasta Luego." << endl;
    }
}

// Funci�n para realizar operaciones aritm�ticas entre dos n�meros
int Operaciones() {
    system("cls");
    int opcion;
    float num1, num2;
    
    // Se piden los datos
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    
    // Presenta las opciones de operaciones al usuario
    cout << "Elija una opcion" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "5. Salir\n" << endl;
    cin >> opcion;
    
    // Realiza la operaci�n correspondiente
	switch (opcion) {
        case 1:
        	system("cls");
            cout << "La suma es: " << num1 + num2 << endl; // Realiza la suma
            system("pause");
            break;
        case 2:
        	system("cls");
            cout << "La resta es: " << num1 - num2 << endl; // Realiza la resta
            system("pause");
            break;
        case 3:
        	system("cls");
            cout << "La multiplicacion es: " << num1 * num2 << endl; // Realiza la multiplicaci�n
            system("pause");
            break;
        case 4:
        	system("cls");
            if (num2 != 0) {
                cout << "La division es: " << num1 / num2 << endl; // Realiza la divisi�n
                system("pause");
            } else {
                cout << "Error, No se puede dividir por cero." << endl;
                system("pause");
            }
            break;
        case 5:
        	system("cls");
            break;
        default:
            cout << "Error. Intente nuevamente." << endl;
    }
	
	if (opcion != 5) {
        Operaciones();
    } 
    
    return 0;
}

// Funci�n para calcular la potencia de un n�mero
int calcularPotencia() {
	system("cls");
    float base, exponente;
	
	// Se piden los datos
    cout << "Ingrese el primer numero: ";
    cin >> base;
    cout << "Ingrese el segundo numero: ";
    cin >> exponente;

    float resultado = pow(base, exponente); // Pow sirve para calcular la potencia de un n�mero
    
    cout << "El resultado es: " << resultado << endl; // Se muestra el resultado
    
	system("pause");
    return 0;
}

// Funci�n para determinar si un n�mero es primo o no
int esPrimo() {
	system("cls");
    int num;
	bool esPrimo = true;
	
    cout << "Ingrese un numero: ";
    cin >> num;

    if (num <= 1) {
        esPrimo = false;
    } else {
        for (int i = 2; i <= num / 2; ++i){
        	if (num % i == 0){
        		esPrimo = false;
        		break;
			}
		}
    }
    
    if (esPrimo) {
    	system("cls");
    	cout << "El numero " << num << " es Primo." << endl; // Se muestra el resultado
	} else {
		cout << "El numero " << num << " no es Primo." << endl; // Se muestra el resultado
	}
    system("pause");
    return 0;
}


bool Bisiesto(int year) {
	/* - Comprobar si es divisible por  4
     - Y NO es divisible por  100, o
     - O es divisible por  400 */
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int esBisiesto() {
    system("cls");
	int year;
	
	// Se pide ingresar el a�o
    cout << "Ingrese un anio: ";
    cin >> year;

	// Usa la funci�n Bisiesto para verificar si el a�o es bisiesto
    if (Bisiesto(year)) {
    	// Si la funci�n retorna verdadero, imprime que el a�o es bisiesto
        cout << "El anio ingresado es bisiesto." << endl;
    } else {
    	// Si la funci�n retorna falso, imprime que el a�o no es bisiesto
        cout << "El anio ingresado no es bisiesto." << endl;
    }
	system("pause");
    return 0;
}

