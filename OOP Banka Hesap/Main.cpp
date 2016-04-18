#include <iostream>
#include <locale>
#include <string>
#include "Vadeli_Dizi.h"
#include "Vadesiz_Dizi.h"

using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "turkish");
	int hesapTur, hesapIcý1, hesapIcý2, islemID1, islemID2, hesapSay1, hesapSay2, vade;
	double islemPara1, islemPara2;

	Vadeli_Dizi * vadeli = new Vadeli_Dizi();
	Vadesiz_Dizi * vadesiz = new Vadesiz_Dizi();

	while (true)
	{
		cout << "-Vadeli Hesapla iþlem yapmak için 2\n-Vadesiz hesap ile iþlem yapmak için 1\n-Çýkmak için 0'a basýn.\n";
		cin >> hesapTur;
		if (hesapTur == 2)
		{
			while (true)
			{
				cout << "Ýþlem Seçiniz.\n****************\n" << "1- Hesap Ekleme\t\t" << "2- Hesap Silme\t\t" << "3- Para Yatir\n" << "4- Para Çek\t\t" << "5- Bilgileri Göster\t" << "6- Ana Menü\n";
				cin >> hesapIcý1;
				if (hesapIcý1 == 1)
				{
					cout << "Kaç Kiþil Hesap Tutacaksýnýz?\n";
					cin >> hesapSay1;
					vadeli->degerAl(hesapSay1);
				}
				else if (hesapIcý1 == 2)
				{
					if (vadeli->hesapKontrol())
					{
						cout << "Silinecek Hesabýn ID Deðeri:\n";
						cin >> islemID1;
						vadeli->sil(hesapSay1, islemID1);
					}
					else
					{
						cout << "Ýþlem yapýlacak herhangi bir veri yok! \n";
					}
				}
				else if (hesapIcý1 == 3)
				{
					if (vadeli->hesapKontrol())
					{
						cout << "Para Yatýrýlacak Hesabýn ID Deðeri:\n";
						cin >> islemID1;
						cout << "Yatýrýlacak Tutarý Girin:\n";
						cin >> islemPara1;
						cout << "Kaç Ay Vade Ýstiyorsunuz?\n";
						cin >> vade;
						vadeli->paraEkle(hesapSay1, islemID1, islemPara1, vade);
					}
					else
					{
						cout << "Ýþlem yapýlacak herhangi bir veri yok! \n";
					}
				}
				else if (hesapIcý1 == 4)
				{
					if (vadeli->hesapKontrol())
					{
						cout << "Para Çekilecek Hesabýn ID Deðeri:\n";
						cin >> islemID1;
						cout << "Çekilecek Tutarý Girin:\n";
						cin >> islemPara1;
						vadeli->paraCek(hesapSay1, islemID1, islemPara1);
					}
					else
					{
						cout << "Ýþlem yapýlacak herhangi bir veri yok! \n";
					}
				}
				else if (hesapIcý1 == 5)
				{
					if (vadeli->hesapKontrol())
					{
						vadeli->goster();
					}
					else
					{
						cout << "Ýþlem yapýlacak herhangi bir veri yok! \n";
					}
				}
				else if (hesapIcý1 == 6)
				{
					break;
				}
			}
		}
		else if (hesapTur == 1)
		{
			while (true)
			{
				cout << "Ýþlem Seçiniz.\n****************\n" << "1- Hesap Ekleme\t\t" << "2- Hesap Silme\t\t" << "3- Para Yatir\n" << "4- Para Çek\t\t" << "5- Bilgileri Göster\t" << "6- Ana Menü\n";
				cin >> hesapIcý2;
				if (hesapIcý2 == 1)
				{
					cout << "Kaç Kiþil Hesap Tutacaksýnýz?\n";
					cin >> hesapSay2;
					vadesiz->degerAl(hesapSay2);
				}
				else if (hesapIcý2 == 2)
				{
					if (vadesiz->hesapKontrol())
					{
						cout << "Silinecek Hesabýn ID Deðeri:\n";
						cin >> islemID2;
						vadesiz->sil(hesapSay2, islemID2);
					}
					else
					{
						cout << "Ýþlem yapýlacak herhangi bir veri yok! \n";
					}
				}
				else if (hesapIcý2 == 3)
				{
					if (vadesiz->hesapKontrol())
					{
						cout << "Para Yatýrýlacak Hesabýn ID Deðeri:\n";
						cin >> islemID2;
						cout << "Yatýrýlacak Tutarý Girin:\n";
						cin >> islemPara2;
						vadesiz->paraEkle(hesapSay2, islemID2, islemPara2);
					}
					else
					{
						cout << "Ýþlem yapýlacak herhangi bir veri yok! \n";
					}
				}
				else if (hesapIcý2 == 4)
				{
					if (vadesiz->hesapKontrol())
					{
						cout << "Para Çekilecek Hesabýn ID Deðeri:\n";
						cin >> islemID2;
						cout << "Çekilecek Tutarý Girin:\n";
						cin >> islemPara2;
						vadesiz->paraCek(hesapSay2, islemID2, islemPara2);
					}
					else
					{
						cout << "Ýþlem yapýlacak herhangi bir veri yok! \n";
					}
				}
				else if (hesapIcý2 == 5)
				{
					if (vadesiz->hesapKontrol())
					{
						vadesiz->goster();
					}
					else
					{
						cout << "Ýþlem yapýlacak herhangi bir veri yok! \n";
					}
				}
				else if (hesapIcý2 == 6)
				{
					break;
				}
			}
		}
		else if (hesapTur == 0)
		{
			break;
		}
	}

	return 0;
}