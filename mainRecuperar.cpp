//Archivo Recuperar()

#include <iostream>
#include <cstdlib>
#include<conio.h>
#include<string.h>
#include "computadora.h"
#include "computadora.cpp"
#include "laboratorio.h"
#include "laboratorio.cpp"
using namespace std;



int main(int argc, char** argv) 
{
	Laboratorio l;
	l.recuperar();
	l.mostrar();
/*
	system("cls");
	
	Computadora c01;
	c01.setSo("Windows");
	c01.setTipo("Lenovo");
	c01.setGb(864.20);
	c01.setRam(16);
	
	Computadora c02;
	c02.setSo("Mac Os");
	c02.setTipo("Apple");
	c02.setGb(1020.9);
	c02.setRam(64);
	
	Computadora c03;
	c03.setSo("Linux");
	c03.setTipo("MintBox 2");
	c03.setGb(481.2);
	c03.setRam(12);
	
	/*Computadora c04;
	c04.setSo("WIndows");
	c04.setTipo("Asus");
	c04.setGb(2060.80);
	c04.setRam(32);
	
	
	Computadora c05;
	c05.setSo("Windows");
	c05.setTipo("Dell");
	c05.setGb(60.2);
	c05.setRam(4);

	Laboratorio lab;
	lab.agregarComputadora(c01);
	lab.agregarComputadora(c02);
	lab.agregarComputadora(c03);
	//lab.agregarComputadora(c04);
	lab.agregarComputadora(c05);
	
	
	//cout << c01;
	Computadora c04;
	cin >> c04;
	//----Forma 1------
	//lab.agregarComputadora(c04);
	// ---------Forma 2------ (Agregando funcion Friend a laboratorio.h)
	lab << c04;
	//MOSTRAR
	lab.mostrar();
	lab.respaldar_tabla();
	lab.respaldar(); //linea por linea
*/
}
