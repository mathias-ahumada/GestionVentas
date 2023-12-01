#include <iostream>
#include <limits>
using namespace std;

#include "aplicacion.h"

int VerificaOpcion(){

        // Verificar si la entrada es un n�mero entero
        int opcion;
        while(true){
        std::cout<<">>";
        while (!(std::cin>>opcion) || std::cin.peek() != '\n') {
            std::cin.clear();  // Limpiar el estado de error
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Descartar la entrada no v�lida
            std::cout << "Entrada no valida. Por favor, ingrese un numero entero.\n";

            std::cout << ">>";
        }

        // Verificar si la entrada est� en el rango deseado
        if (opcion < 0 || opcion > 2) {
            std::cout << "Opcion no valida. Debe estar entre 0 y 2.\n";

            continue;  // Volver al inicio del bucle

        }
        return opcion;
      }
}

void Aplicacion::MenuApp() {
    while (true) {
        std::cout << "*****************" << std::endl;
        std::cout << "*******APP*******" << std::endl;
        std::cout << "*****************" << std::endl;
        std::cout << "-1 ADMINISTRADOR" << std::endl;
        std::cout << "-2 VENDEDOR " << std::endl;
        std::cout << "*****************" << std::endl;
        std::cout << "-0 SALIR DEL PROGRAMA" << std::endl;

        int op = VerificaOpcion();
        /*
        std::cout << ">>";
        // Verificar si la entrada es un n�mero entero
        while (!(opcion) || std::cin.peek() != '\n') {
            std::cin.clear();  // Limpiar el estado de error
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Descartar la entrada no v�lida
            std::cout << "Entrada no valida. Por favor, ingrese un numero entero.\n";
            std::cout << ">>";
        }

        // Verificar si la entrada est� en el rango deseado
        if (opcion < 0 || opcion > 2) {
            std::cout << "Opcion no valida. Debe estar entre 0 y 2.\n";
            continue;  // Volver al inicio del bucle
        }
        */
    system("cls");
        switch (op) {
            case 0:
                return;
            case 1:
                system("cls");
                _admin.MenuAdmin();
                break;
            case 2:
                system("cls");
                _vendedor.MenuVendedor();
                break;
        }
    }
}




