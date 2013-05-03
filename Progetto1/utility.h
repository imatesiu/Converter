#pragma once
#include <iostream>
#using <System.dll>
using namespace System;
using namespace std;
 ref class Utility {
//
// dato un valore data, copia gli len bit meno significativi nel
// vettore buf alle posizioni di bit assolute off..off+len-1
//

public:
	Utility(void){};
static void push (unsigned int buf[], unsigned int data, int len, int off);

//
// dato un offset >=0 (0..*) che rappresenta la posizione di un bit all'interno
// del vettore di caratteri buf, setta a 1 tale bit.
//
static void setbit( unsigned int buf[], int offset);

// converte un unsigned int in un intero senza segno 0x80 = 128 non -128!!
static unsigned int toint(unsigned int C);

// funzione che copia gli N elementi di un unsigned int[] in un array<Byte>

// funzione che copia gli N elementi di un array<Byte> in un unsigned int[]

//
// dato un offset >=0 (0..*) che rappresenta la posizione di un bit all'interno
// del vettore di caratteri buf, restituisce il valore numerico del bit.
//
static int getbit(unsigned int buf[], int offset);

//
// dato un vettore buf, un indice assoluto di posizione di bit nel vettore,
// ed una lunghezza len, restituisce il valore numerico corrispondente
// ai bits off..off+len-1 del vettore.
//
static unsigned int pop (unsigned int buf[], int len, int off);

};