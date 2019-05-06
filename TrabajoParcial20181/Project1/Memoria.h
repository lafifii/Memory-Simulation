#pragma once
#include "Variable.h"
#include <set>
using namespace std;
using namespace System;
using namespace System::ComponentModel;
#include <vector>
using namespace System;
using namespace System::Windows::Forms;


public class Memoria
{
	unsigned char *Dinamica, *Estatica, *ASCIID, *ASCIIE;
	int indiceDinamica, indiceEstatica, indiceasciid, indiceasciiest, npuntero;
	set <string> st;
	vector <Variable*> variables;
	
public:
	Memoria();
	void Escribir(int memoria, unsigned char * valor, int numBytes, int indiceD, int indiceE);
	void Imprimir(int memoria, int inicio, int final, DataGridView ^DgvMemoria);
	void ImprimirASCII(int memoria, int inicio, int final, DataGridView ^DgvMemoria);

	void AgregarVariable(int memoria, unsigned char *valor, int numBytes, string nombre, string tipo);
	bool EliminarVariablePuntero(string nombrevariable);
	void AgregarVariableDoble(int memoria,double valor, int numBytes, string nombre, string tipo);
	void AgregarVariableFlotante(int memoria,  float valor, int numBytes, string nombre, string tipo);
	void AgregarLDoble(int memoria, long double valor, int numBytes, string nombre, string tipo);
	bool Modificar(string nombrevariable, string nuevovalor);
	bool Existe(string s);
	void AgregarAlSetNombreArreglo(string n) {
		st.insert(n);
	}
	~Memoria();
};

