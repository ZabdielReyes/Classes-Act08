#ifndef COMPUTADORA_H_INCLUDED
#define COMPUTADORA_H_INCLUDED
#include<iostream>
#include <iomanip>
using namespace std;

class Computadora
{
	string so;
	string tipo;
	float gb;
	int ram;
public:
	Computadora();
	Computadora(const string &so,
			  const string &tipo,
		   	  float gb,
			  int ram);
	void setSo(const string &v);
	string getSo();
	void setTipo(const string &v);
	string getTipo();
	void setGb(float v);
	float getGb();
	void setRam(int v);
	int getRam();
	
	friend ostream& operator<<(ostream &out, const Computadora &p)
	{
		out << left ;
		out << setw(12) << p.so ;
		out << setw(12) << p.tipo ;
		out << setw(12) << p.gb;
		out << setw(10) << p.ram;
		out <<endl;
		
		return out;
	}
	
	friend istream& operator >>(istream &in, Computadora &p)
	{
		/*
		string temp;
		float gb;
		int ram;
		*/
		
		cout <<"SO: ";
		getline(cin, p.so);
		
		cout <<"Marca: ";
		getline(cin, p.tipo);
		
		cout <<"Almacenamiento: ";
		cin>> p.gb;
		
		cout <<"Ram: ";
		cin>> p.ram;
		
		return in;
	}
	
};

#endif
