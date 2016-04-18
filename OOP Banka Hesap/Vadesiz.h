#pragma once
#include "Hesap.h"
#include <string>
#include <iostream>

using namespace std;

class Vadesiz : public Hesap
{
protected:
	int id;
	double bakiye, oran;
	string ad_soyad;
public:
	Vadesiz();
	double paraMiktari() override;
	void paraYatir(double yatirilacakPara) override;
	void paraYatir(double yatirilacakPara, int ay) override;
	void paraCek(double cekilecelPara) override;
	int idDeger(int gelenId) override;
	friend ostream& operator << (ostream& os, const Vadesiz * vadesiz);
	friend istream & operator >> (istream & cin, Vadesiz * vadesiz);
};

