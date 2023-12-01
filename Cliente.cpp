#include "Cliente.h"

#include <iostream>
#include <string>

using namespace std;

#include "Fecha.h"




void Cliente::setTotalGastado(float totalGastado)
{
    _totalGastado=totalGastado;
}

float Cliente::getTotalGastado() const
{
    return _totalGastado;
}


void Cliente::Mostrar() const{
    cout<<"El Estado es: ";
        if(getEstado()==true){
            cout<<"Activo"<<endl;
        } else {
            cout<<"Inactivo"<<endl;
        }
        if(getEstado()==true){
        cout<<"El Legajo es: "<<getLegajo()<<endl;
        cout<<"El nombre es: "<<getNombre()<<endl;
        cout<<"El apellido es: "<<getApellido()<<endl;
        cout<<"La Fecha de Alta es: "<<_fechaDeAlta.toString();
        cout<<endl;
        cout<<"El total gastado hasta la fecha es: "<<_totalGastado<<endl;
        cout<<endl;
        } else {
        cout<<"Producto ya no se encuentra"<<endl;
        }
}
