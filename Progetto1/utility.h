#pragma once

#include "struttureDatiMessaggi.h"
#include <iostream>
#using <System.dll>
using namespace System;
using namespace std;


//
// dato un valore data, copia gli len bit meno significativi nel
// vettore buf alle posizioni di bit assolute off..off+len-1
//
void push (unsigned char buf[], unsigned int data, int len, int off);

//
// dato un offset >=0 (0..*) che rappresenta la posizione di un bit all'interno
// del vettore di caratteri buf, setta a 1 tale bit.
//
void setbit(unsigned char buf[], int offset);

// converte un char in un intero senza segno 0x80 = 128 non -128!!
unsigned int toint(char C);


//
// dato un offset >=0 (0..*) che rappresenta la posizione di un bit all'interno
// del vettore di caratteri buf, restituisce il valore numerico del bit.
//
int getbit(unsigned char buf[], int offset);

//
// dato un vettore buf, un indice assoluto di posizione di bit nel vettore,
// ed una lunghezza len, restituisce il valore numerico corrispondente
// ai bits off..off+len-1 del vettore.
//
unsigned int pop (unsigned char buf[], int len, int off);