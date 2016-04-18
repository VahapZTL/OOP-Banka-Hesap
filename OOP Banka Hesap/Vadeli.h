#pragma once
#include "Hesap.h"
#include <string>
#include <iostream>

using namespace std;

class Vadeli : public Hesap
{
protected:
	int id;
	double bakiye, oran;
	string ad_soyad;
public:
	Vadeli();
	double paraMiktari() override;
	void paraYatir(double yatirilacakPara, int ay) override;
	void paraYatir(double yatirilacakPara) override;
	void paraCek(double cekilecelPara) override;
	int idDeger(int gelenId) override;
	friend ostream& operator << (ostream& os, const Vadeli * vade);
	friend istream & operator >> (istream & inp, Vadeli * vade);
};

