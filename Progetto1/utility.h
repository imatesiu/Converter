#pragma once
#using <System.dll>
using namespace System;



//typedef __int8 byte;
ref class utility{

public:
//
// dato un valore data, copia gli len bit meno significativi nel
// vettore buf alle posizioni di bit assolute off..off+len-1
//
static void push (array<Byte> ^buf, unsigned int data, int len, int off);

//
// dato un offset >=0 (0..*) che rappresenta la posizione di un bit all'interno
// del vettore di caratteri buf, setta a 1 tale bit.
//
static void setbit( array<Byte> ^buf, int offset);

// converte un char in un intero senza segno 0x80 = 128 non -128!!
//unsigned int toint(char C);

// funzione che copia gli N elementi di un byte[] in un array<Byte>
//void copiaByteInArray(byte *source, array<Byte> ^dest, int N);
//
// funzione che copia gli N elementi di un array<Byte> in un byte[]
//void copiaArrayInByte(array<Byte> ^ource, byte *dest, int N);

//
// dato un offset >=0 (0..*) che rappresenta la posizione di un bit all'interno
// del vettore di caratteri buf, restituisce il valore numerico del bit.
//
static int getbit(array<Byte> ^buf, int offset);

//
// dato un vettore buf, un indice assoluto di posizione di bit nel vettore,
// ed una lunghezza len, restituisce il valore numerico corrispondente
// ai bits off..off+len-1 del vettore.
//
static unsigned int pop (array<Byte> ^buf, int len, int off);

};