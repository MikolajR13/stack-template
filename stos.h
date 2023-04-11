#pragma once
#include <iostream>
#include<typeinfo>
using namespace std;
template<typename Dane, int rozmiar>
class stos
{
public:
	Dane* dane;
	int pocz;
public:
	stos();
	void push(Dane);
	Dane pop();
	~stos();
	bool pusty()const;
	void top();


};
template<typename Dane, int rozmiar>
stos<Dane, rozmiar>::stos()
{
	dane = new Dane[rozmiar];
	pocz = 0;
}
template <typename Dane, int rozmiar>
bool stos<Dane, rozmiar>::pusty() const
{
	return pocz == 0;
}
template < typename Dane, int rozmiar>
void stos<Dane, rozmiar>::push(Dane data)
{
	dane[pocz++] = data;
}
template < typename Dane, int rozmiar>
Dane stos<Dane, rozmiar>::pop()
{
	return dane[--pocz];
}
template < typename Dane, int rozmiar>
stos<Dane, rozmiar>::~stos()
{
	delete[]dane;
}
template < typename Dane, int rozmiar>
void stos<Dane, rozmiar>::top()
{
	cout << dane[pocz];
}
