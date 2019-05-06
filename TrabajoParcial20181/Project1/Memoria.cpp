#include "Memoria.h"

Memoria::Memoria()
{
	Dinamica = new unsigned char[500000];
	Estatica = new unsigned char[500000];
	ASCIID = new unsigned char[500000];
	ASCIIE = new unsigned char[500000];
	npuntero = 0;
	//INICIALIZACION DE INDICES
	indiceDinamica = indiceEstatica = 0;

	//INICIALIZACION DE VECTORES
	for (int i = 0; i < 500000; i++)
	{
		this->Dinamica[i] = Estatica[i] = 0;
		this->ASCIID[i] = ASCIIE[i] = '.';
	}

}

void Memoria::Escribir(int memoria, unsigned char *valor, int numBytes, int indiceD, int indiceE)
{
	if (memoria == 1) { // Dinamica
		for (int i = 0; i < numBytes; i++)
		{
			this->Dinamica[indiceD + i] = valor[i];
			this->ASCIID[indiceD + i] = valor[i];
		}
	}
	else {
		for (int i = 0; i < numBytes; i++)
		{
			this->Estatica[indiceE + i] = valor[i];
			this->ASCIIE[indiceE + i] = valor[i];
		}
	}
}
void Memoria::Imprimir(int memoria, int inicio, int final, DataGridView ^DgvMemoria)
{

	cli::array<String^>^fila = gcnew cli::array<String^>(17);
	int indice = 0;
	for (int i = 0; i < final - inicio + 1; i++)
	{
		if (i % 16 == 0) {
			DgvMemoria->Rows->Add(fila);
			fila->Clear;
			indice = 0;
			fila[indice] = String::Format("{0:x2}", inicio + i);
		}
		indice++;
		if (memoria == 1) { //DINAMICA
			fila[indice] = String::Format("{0:x2}", Dinamica[inicio + i]);
		}
		else {
			fila[indice] = String::Format("{0:x2}", Estatica[inicio + i]);
		}

	}
}
void Memoria::ImprimirASCII(int memoria, int inicio, int final, DataGridView ^DgvMemoria)
{
	
	cli::array<String^>^fila = gcnew cli::array<String^>(17);
	int indice = 0;
	for (int i = 0; i < final - inicio + 1; i++)
	{
		if (i % 16 == 0) {

			DgvMemoria->Rows->Add(fila);
			fila->Clear;
			indice = 0;
			fila[indice] = Convert::ToString(inicio + i);
		}
		indice++;
		fila[indice] = "";
		if (memoria == 1) { //DINAMICA
			fila[indice] += (char)ASCIID[inicio + i];
		}
		else {
			fila[indice] += (char)ASCIIE[inicio + i];
		}
	}
}

void Memoria::AgregarVariable(int memoria, unsigned char * valor, int numBytes, string nombre, string tipo)
{
	st.insert(nombre);
	if (memoria == 1)
	{
		Variable*nueva = new Variable(nombre, tipo, "dinamica", indiceDinamica, numBytes,indiceEstatica);
		variables.push_back(nueva);
		Escribir(memoria, (unsigned char*)&valor, numBytes, indiceDinamica, indiceEstatica);
		indiceDinamica += numBytes;
		indiceasciid += numBytes;

		//Dinamica reserva en ambos tipos de memoria
		unsigned char *puntero_est = (unsigned char*)&indiceDinamica;
		Escribir(2, puntero_est, sizeof(int), indiceDinamica, indiceEstatica);
		indiceEstatica += sizeof(int);
		indiceasciiest += sizeof(int);

	}
	else
	{

		Variable*nueva = new Variable(nombre, tipo, "estatica", indiceEstatica, numBytes,0);
		variables.push_back(nueva);
		Escribir(memoria, (unsigned char*)&valor, numBytes, indiceDinamica, indiceEstatica);
		indiceEstatica += numBytes;
		indiceasciiest += numBytes;
	}
}

bool Memoria::EliminarVariablePuntero(string nombrevariable)
{
	if (nombrevariable[0] != '*')
		return false;
	
	int indicemod = -1;
	for (int j = 0; j < (int)variables.size(); j++)
	{
		if (variables[j]->getNombre() == nombrevariable)
		{
			indicemod = j;
			break;
		}
	}
	if (indicemod == -1)
		return false;
	
	st.erase(nombrevariable);
	for (int i = 0; i < variables[indicemod]->getBytes(); i++)
	{
		Dinamica[variables[indicemod]->getEspacio() + i] = 0;
		ASCIID[variables[indicemod]->getEspacio() + i] = '.';
	}
	for (int i = 0; i < sizeof(int); i++) {
		Estatica[variables[indicemod]->getEspacioDinamico() + i] = 0;
		ASCIIE[variables[indicemod]->getEspacioDinamico() + i] = '.';
	}
	return true;
}
void Memoria::AgregarVariableDoble(int memoria, double valor, int numBytes, string nombre, string tipo)
{
	if (memoria == 1)
	{
		Variable*nueva = new Variable(nombre, tipo, "dinamica", indiceDinamica, numBytes,indiceEstatica);
		variables.push_back(nueva);
		Escribir(memoria, (unsigned char*)&valor, numBytes, indiceDinamica, indiceEstatica);
		indiceDinamica += numBytes;
		indiceasciid += numBytes;

		//Dinamica reserva en ambos tipos de memoria
		unsigned char *puntero_est = (unsigned char*)&indiceDinamica;
		Escribir(2, puntero_est, sizeof(int), indiceDinamica, indiceEstatica);
		indiceEstatica += sizeof(int);
		indiceasciiest += sizeof(int);
	}
	else 
	{
		Variable*nueva = new Variable(nombre, tipo, "estatica", indiceDinamica, numBytes,0);
		variables.push_back(nueva);
		Escribir(memoria, (unsigned char*)&valor, numBytes, indiceDinamica, indiceEstatica);
		indiceEstatica += numBytes;
		indiceasciiest += numBytes;
	}

}
void Memoria::AgregarVariableFlotante(int memoria, float  valor, int numBytes, string nombre, string tipo)
{
	if (memoria == 1)
	{
		Variable*nueva = new Variable(nombre, tipo, "dinamica", indiceDinamica, numBytes,indiceEstatica);
		variables.push_back(nueva);
		Escribir(memoria, (unsigned char*)&valor, numBytes, indiceDinamica, indiceEstatica);
		indiceDinamica += numBytes;
		indiceasciid += numBytes;
		//Dinamica reserva en ambos tipos de memoria
		unsigned char *puntero_est = (unsigned char*)&indiceDinamica;
		Escribir(2, puntero_est, sizeof(int), indiceDinamica, indiceEstatica);
		indiceEstatica += sizeof(int);
		indiceasciiest += sizeof(int);
	}
	else
	{
		Variable*nueva = new Variable(nombre, tipo, "estatica", indiceDinamica, numBytes,0);
		variables.push_back(nueva);
		Escribir(memoria, (unsigned char*)&valor, numBytes, indiceDinamica, indiceEstatica);
		indiceEstatica += numBytes;
		indiceasciiest += numBytes;
	}
}
void Memoria::AgregarLDoble(int memoria, long double valor, int numBytes, string nombre, string tipo)
{
	if (memoria == 1)
	{
		Variable*nueva = new Variable(nombre, tipo, "dinamica", indiceDinamica, numBytes, indiceEstatica);
		variables.push_back(nueva);
		Escribir(memoria, (unsigned char*)&valor, numBytes, indiceDinamica, indiceEstatica);
		indiceDinamica += numBytes;
		indiceasciid += numBytes;
		//Dinamica reserva en ambos tipos de memoria
		unsigned char *puntero_est = (unsigned char*)&indiceDinamica;
		Escribir(2, puntero_est, sizeof(int), indiceDinamica, indiceEstatica);
		indiceEstatica += sizeof(int);
		indiceasciiest += sizeof(int);
	}
	else
	{
		Variable*nueva = new Variable(nombre, tipo, "estatica", indiceDinamica, numBytes,0);
		variables.push_back(nueva);
		Escribir(memoria, (unsigned char*)&valor, numBytes, indiceDinamica, indiceEstatica);
		indiceEstatica += numBytes;
		indiceasciiest += numBytes;
	}
}
bool Memoria::Modificar(string nombrevariable, string nuevovalor)
{
	int indicemod = -1;
	for (int j = 0; j < (int)variables.size(); j++)
	{
		if (variables[j]->getNombre() == nombrevariable)
		{
			indicemod = j;
			break;
		}
	}
	if (indicemod == -1)
		return false;

	else
	{
		string::size_type sz;
		if (variables[indicemod]->getTipo() == "int")
		{
			int entero = stoi(nuevovalor, &sz);
			if (variables[indicemod]->getMemoria() == "dinamica")
				Escribir(1, (unsigned char*)&entero, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
			else
				Escribir(2, (unsigned char*)&entero, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
		}
		else if (variables[indicemod]->getTipo() == "float")
		{
			float flotante = stof(nuevovalor, &sz);

			if (variables[indicemod]->getMemoria() == "dinamica")
				Escribir(1, (unsigned char*)&flotante, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
			else
				Escribir(2, (unsigned char*)&flotante, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
		}
		else if (variables[indicemod]->getTipo() == "longlong")
		{
			long long ll = stoll(nuevovalor, &sz);
			if (variables[indicemod]->getMemoria() == "dinamica")
				Escribir(1, (unsigned char*)&ll, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
			else
				Escribir(2, (unsigned char*)&ll, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
		}
		else if (variables[indicemod]->getTipo() == "double")
		{
			double doble = stod(nuevovalor, &sz);
			if (variables[indicemod]->getMemoria() == "dinamica")
				Escribir(1, (unsigned char*)&doble, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
			else
				Escribir(2, (unsigned char*)&doble, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
		}
		else if (variables[indicemod]->getTipo() == "char")
		{
			char caracter = nuevovalor[0];
			if (variables[indicemod]->getMemoria() == "dinamica")
				Escribir(1, (unsigned char*)&caracter, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
			else
				Escribir(2, (unsigned char*)&caracter, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
		}
		else if (variables[indicemod]->getTipo() == "unsignedchar")
		{
			unsigned char ucaracter = (unsigned char)nuevovalor[0];
			if (variables[indicemod]->getMemoria() == "dinamica")
				Escribir(1, (unsigned char*)&ucaracter, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
			else
				Escribir(2, (unsigned char*)&ucaracter, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
		}
		else if (variables[indicemod]->getTipo() == "signedchar")
		{
			signed char scaracter = (signed char)nuevovalor[0];
			if (variables[indicemod]->getMemoria() == "dinamica")
				Escribir(1, (unsigned char*)&scaracter, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
			else
				Escribir(2, (unsigned char*)&scaracter, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
		}
		else if (variables[indicemod]->getTipo() == "unsignedint")
		{
			unsigned int uint = (unsigned int)stoi(nuevovalor, &sz);
			if (variables[indicemod]->getMemoria() == "dinamica")
				Escribir(1, (unsigned char*)&uint, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
			else
				Escribir(2, (unsigned char*)&uint, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
		}
		else if (variables[indicemod]->getTipo() == "signedint")
		{
			signed int sint = (signed int)stoi(nuevovalor, &sz);
			if (variables[indicemod]->getMemoria() == "dinamica")
				Escribir(1, (unsigned char*)&sint, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
			else
				Escribir(2, (unsigned char*)&sint, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
		}
		else if (variables[indicemod]->getTipo() == "short")
		{
			short int shint = (short int)stoi(nuevovalor, &sz);
			if (variables[indicemod]->getMemoria() == "dinamica")
				Escribir(1, (unsigned char*)&shint, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
			else
				Escribir(2, (unsigned char*)&shint, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
		}
		else if (variables[indicemod]->getTipo() == "longint")
		{
			long int li = (long int)stoll(nuevovalor, &sz);
			if (variables[indicemod]->getMemoria() == "dinamica")
				Escribir(1, (unsigned char*)&li, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
			else
				Escribir(2, (unsigned char*)&li, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
		}
		else if (variables[indicemod]->getTipo() == "unsignedlongint")
		{
			unsigned long int uli = (unsigned long int)stoll(nuevovalor, &sz);
			if (variables[indicemod]->getMemoria() == "dinamica")
				Escribir(1, (unsigned char*)&uli, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
			else
				Escribir(2, (unsigned char*)&uli, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
		}
		else if (variables[indicemod]->getTipo() == "signedlongint")
		{
			signed long int sli = (signed long int)stoll(nuevovalor, &sz);
			if (variables[indicemod]->getMemoria() == "dinamica")
				Escribir(1, (unsigned char*)&sli, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
			else
				Escribir(2, (unsigned char*)&sli, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
		}
		else if (variables[indicemod]->getTipo() == "longdouble")
		{
			long double lld = (long double)stoll(nuevovalor, &sz);
			if (variables[indicemod]->getMemoria() == "dinamica")
				Escribir(1, (unsigned char*)&lld, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
			else
				Escribir(2, (unsigned char*)&lld, variables[indicemod]->getBytes(), variables[indicemod]->getEspacio(), variables[indicemod]->getEspacio());
		}

		return true;
	}
}
bool Memoria::Existe(string s)
{
	if (st.count(s) == 1)
		return true;
	else
		return false;
}



Memoria::~Memoria()
{
	delete[] Dinamica;
	delete[]Estatica;
	delete[]ASCIID;
	delete[]ASCIIE;
}
