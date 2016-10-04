//Declaração dos Registros

#define MAX1 1000
#define MAX2 1000

typedef struct Medida{
	double Atenua, Veloc;
} Medida;

typedef struct Amostra{
	Medida* amo[MAX1];
} Amostra;

typedef struct ConjAmostras{
	//TODO
} ConjAmostras;


Medida* newMedida(float Atenua, float Veloc){
	//TODO
	return NULL;
}

Amostra* newAmostr(char* linha1){
	//TODO
	return NULL;
}

