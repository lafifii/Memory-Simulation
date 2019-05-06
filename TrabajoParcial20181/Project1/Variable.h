#pragma once
#include <string.h>
#include <string>
using namespace std;
class Variable
{
	string nombre, memoria, tipo;
	int nmemoria, bytes, nmemoriaaux;
public:
	Variable(string n, string t, string mem, int emem, int bytes, int ememod);
	string getNombre();
	string getMemoria();
	string getTipo();
	int getEspacio();
	int getEspacioDinamico();
	int getBytes();
	~Variable();
};

