#ifndef COMPUTADORA_H_INCLUDED
#define COMPUTADORA_H_INCLUDED
#include<iostream>
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
};

#endif
