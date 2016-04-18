#pragma once
class Hesap
{
protected:
	virtual void paraYatir(double yatirilacakPara) = 0;
	virtual void paraYatir(double yatirilacakPara, int ay) = 0;
	virtual void paraCek(double cekilecelPara) = 0;
	virtual int idDeger(int gelenID) = 0;
	virtual double paraMiktari() = 0;
};
