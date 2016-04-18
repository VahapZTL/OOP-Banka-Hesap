#include "Vadesiz_Dizi.h"

Vadesiz_Dizi::Vadesiz_Dizi()
{
	dizi = NULL;
	gosterr = 0;
}

void Vadesiz_Dizi::degerAl(int sayi)
{
	gosterr = sayi;
	dizi = new Hesap*[sayi];

	for (int i = 0; i < gosterr; i++)
	{
		dizi[i] = new Vadesiz();
	}
	for (int i = 0; i < gosterr; i++)
	{
		cout << "Elemanlarý Girin(ID, Bakiye, Ad Soyad): \n";
		cin >> (Vadesiz *)(dizi[i]);
	}
}

void Vadesiz_Dizi::sil(int a, int silID)
{
	if (dizi != NULL)
	{
		for (int i = 0; i < a; i++)
		{
			if (((Vadesiz *)dizi[i])->idDeger(silID))
			{
				delete dizi[i];
			}
		}
	}
	else
	{
		cout << "Herhangi bir veri bulanamadý!\n";
	}
}

void Vadesiz_Dizi::paraEkle(int a, int ekleID, double gelenPara)
{
	if (dizi != NULL)
	{
		for (int i = 0; i < a; i++)
		{
			int id2;

			id2 = ((Vadesiz *)dizi[i])->idDeger(ekleID);

			if (id2 != 0)
			{
				((Vadesiz *)dizi[i])->paraYatir(gelenPara);
			}
		}
	}
	else
	{
		cout << "Herhangi bir veri bulanamadý!\n";
	}
}

void Vadesiz_Dizi::paraCek(int a, int cekID, double cekilenPara)
{
	if (dizi != NULL)
	{
		for (int i = 0; i < a; i++)
		{
			int id2;
			double para2;

			id2 = ((Vadesiz *)dizi[i])->idDeger(cekID);

			if (id2 != 0)
			{
				para2 = ((Vadesiz *)dizi[i])->paraMiktari();

				if (cekilenPara <= para2)
				{
					((Vadesiz *)dizi[i])->paraCek(cekilenPara);
				}
				else
				{
					cout << "Bakiyeniz Yeterli Deðil!\n";
				}
			}
		}
	}
	else
	{
		cout << "Herhangi bir veri bulanamadý!\n";
	}
}

void Vadesiz_Dizi::goster()
{
	if (dizi != NULL)
	{
		for (int i = 0; i < gosterr; i++)
		{
			cout << (Vadesiz *)(dizi[i]);
		}
	}
	else
	{
		cout << "Herhangi bir veri bulanamadý!\n";
	}
}

bool Vadesiz_Dizi::hesapKontrol()
{
	if (dizi != NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}


Vadesiz_Dizi::~Vadesiz_Dizi()
{
	if (dizi != NULL)
	{
		delete[] dizi;
	}
}
