#include "Vadeli.h"

Vadeli::Vadeli()
{
	id = 0;
	bakiye = 0.0;
	ad_soyad = "Değer Girilmedi";
	oran = 0;
}

double Vadeli::paraMiktari()
{
	return bakiye;
}

void Vadeli::paraYatir(double yatirilacakPara, int ay)
{
	bakiye += yatirilacakPara;
	oran = (double)(oran / 100);
	for (int i = 0; i < ay; i++)
	{
		bakiye += bakiye * oran;
	}
}

void Vadeli::paraYatir(double yatirilacakPara)
{
	bakiye += yatirilacakPara;
}

void Vadeli::paraCek(double cekilecelPara)
{
	bakiye -= cekilecelPara;
}

int Vadeli::idDeger(int gelenId)
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

ostream& operator << (ostream& os, const Vadeli * vade)
{
	os << "ID: \t\t" << vade->id << "\n Bakiye: \t\t" << vade->bakiye << "\n Ad Soyad: \t\t" << vade->ad_soyad << endl;
	return os;
}

istream & operator >> (istream & inp, Vadeli * vade)
{
	inp >> vade->id >> vade->bakiye >> vade->oran >> vade->ad_soyad;
	return inp;
}