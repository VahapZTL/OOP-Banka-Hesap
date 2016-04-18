#pragma once

#include "Vadesiz.h"
#include <iostream>

class Vadesiz_Dizi
{
protected:
	Hesap** dizi;
	int gosterr;
public:
	Vadesiz_Dizi();
	void degerAl(int sayi);
	void sil(int a, int silID);
	void paraEkle(int a, int ekleID, double gelenPara);
	void paraCek(int a, int cekID, double cekilenPara);
	void goster();
	bool hesapKontrol();
	~Vadesiz_Dizi();
};

