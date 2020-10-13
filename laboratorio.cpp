#include <iostream>
#include <cstdlib>
#include<conio.h>
#include<string.h>
#include "laboratorio.h"
Laboratorio::Laboratorio()
{
	cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &p)
{
	if(cont < 5){
		arreglo[cont] = p;
		cont++;
	}
	else{
		cout  << "Arreglo lleno" << endl;
	}
}

void Laboratorio::mostrar()
{
	for(size_t i=0; i <cont; i++){
		Computadora &p = arreglo[i];
		cout << "Sistema Operativo: " << p.getSo() <<endl;
		cout << "Marca: " << p.getTipo() <<endl;
		cout << "Almacenamiento: " << p.getGb() <<"	Gigabytes"<<endl;
		cout << "Ram: " << p.getRam() <<"	Gb"<<endl;
		cout << endl;
		
	}
}
