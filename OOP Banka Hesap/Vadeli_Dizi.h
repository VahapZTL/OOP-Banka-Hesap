#pragma once
#include "Vadeli.h"
#include <iostream>

class Vadeli_Dizi
{
private:
	Hesap** dizi;
	int gosterr;
public:
	Vadeli_Dizi();
	void degerAl(int sayi);
	void sil(int a, int silID);
	void paraEkle(int a, int ekleID, double gelenPara, int vade);
	void paraCek(int a, int cekID, double cekilenPara);
	void goster();
	bool hesapKontrol();
	~Vadeli_Dizi();
};

