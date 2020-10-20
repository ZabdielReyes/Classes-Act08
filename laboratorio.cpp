#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include<conio.h>
#include<string>
#include<string.h>
#include "laboratorio.h"

#include <fstream>

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
	cout << left;
    cout << setw(10) << "Nombre";
    cout << setw(10) << "Tipo";
    cout << setw(8) << "Fuerza";
    cout << setw(6) << "Salud";
    cout << endl;
	
	for(size_t i=0; i <cont; i++){
		Computadora &p = arreglo[i];
		cout << p;
		/*
		cout << "Sistema Operativo: " << p.getSo() <<endl;
		cout << "Marca: " << p.getTipo() <<endl;
		cout << "Almacenamiento: " << p.getGb() <<"	Gigabytes"<<endl;
		cout << "Ram: " << p.getRam() <<"	Gb"<<endl;
		cout << endl;
		*/
	}
}

void Laboratorio::respaldar_tabla()
{
	ofstream archivo("computadoras_tabla.txt");
	if (archivo.is_open()) {
		archivo << left ;
		archivo << setw(22) << "Sistema Operativo: " ;
		archivo << setw(22) << "Marca: " ;
		archivo << setw(22) << "Almacenamiento: ";
		archivo << setw(22) << "Ram: ";
		archivo <<endl;
		
		for (size_t i=0; i<cont; i++) {
			Computadora &p = arreglo[i];
			archivo << p;
		}
		
	}
	archivo.close();
}


void Laboratorio::respaldar()
{
	ofstream archivo("computadoras.txt");
	if (archivo.is_open()) {
		
		for (size_t i=0; i<cont; i++) {
			Computadora &p = arreglo[i];
			archivo << p.getSo() 	<< endl;
			archivo << p.getTipo()  << endl;
			archivo << p.getGb() 	<< endl;
			archivo << p.getRam() 	<< endl;
		}
		
	}
	archivo.close();
}

void Laboratorio::recuperar()
{
	ifstream archivo("computadoras.txt");
	if (archivo.is_open()) {
		string temp;
		float gb;
		int ram;
		Computadora p;
		
		while(true)
		{
			getline(archivo, temp); // para leer nombre sistema operativo
			if (archivo.eof()) {
                break;
            }
			p.setSo(temp);
			
			getline(archivo, temp); // Tipo
			p.setTipo(temp);
			
			getline(archivo, temp); // Gb
			float gb = stof(temp); //string to float
			p.setGb(gb);
			
			getline(archivo, temp);
			ram = stoi(temp); //string to int
			p.setRam(ram);
			
			agregarComputadora(p);
		}
	}
	archivo.close();
}
