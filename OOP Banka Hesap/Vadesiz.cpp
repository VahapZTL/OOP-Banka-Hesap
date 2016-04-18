#include "Vadesiz.h"



Vadesiz::Vadesiz()
{
	id = 0;
	bakiye = 0.0;
	ad_soyad = "Deðer Girilmedi";
}

double Vadesiz::paraMiktari()
{
	return bakiye;
}

void Vadesiz::paraYatir(double yatirilacakPara)
{
	bakiye += yatirilacakPara;
}

void Vadesiz::paraYatir(double yatirilacakPara, int ay)
{
	bakiye += yatirilacakPara;
	oran = (double)(oran / 100);
	for (int i = 0; i < ay; i++)
	{
		bakiye += bakiye * oran;
	}
}

void Vadesiz::paraCek(double cekilecelPara)
{
	bakiye -= cekilecelPara;
}

int Vadesiz::idDeger(int gelenId)
{
	if (gelenId == this->id)
	{
		return this->id;
	}
	else
	{
		return 0;
	}
}

ostream& operator << (ostream& os, const Vadesiz * vadesiz)
{
	os << "ID: \t\t" << vadesiz->id << "\n Bakiye: \t\t" << vadesiz->bakiye << "\n Ad Soyad: \t\t" << vadesiz->ad_soyad << endl;
	return os;
}

istream & operator >> (istream & cin, Vadesiz * vadesiz)
{
	cin >> vadesiz->id >> vadesiz->bakiye >> vadesiz->ad_soyad;
	return cin;
}