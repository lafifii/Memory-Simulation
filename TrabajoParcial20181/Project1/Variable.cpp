#include "Variable.h"



Variable::Variable(string n, string t, string mem, int emem, int bytes, int ememod)
{
	nombre = n;
	tipo = t;
	memoria = mem;
	nmemoria = emem;
	nmemoriaaux = ememod;
	this->bytes = bytes;
}

string Variable::getNombre()
{
	return nombre;
}

string Variable::getMemoria()
{
	return memoria;
}

string Variable::getTipo()
{
	return tipo;
}

int Variable::getEspacio()
{
	return nmemoria;
}

int Variable::getEspacioDinamico()
{
	return nmemoriaaux;
}

int Variable::getBytes()
{
	return bytes;
}

Variable::~Variable()
{
}
