#include <iostream>
#include <math.h>
using namespace std;


// soru1:G�R�LEN 3 sayinin en b�y���n� yazd�ran kod 
/*int main() {
	int sayi, sayi1, sayi2, enb;
	cout << "3 sayi giriniz:\n "; cin >> sayi >> sayi1 >> sayi2;
	enb = sayi;
	if (enb < sayi1)
	{
		enb = sayi1;
	}
	if (enb < sayi2)
	{
		enb = sayi2;
	}
	cout << "En buyuk sayi: " << enb;
	return 0;
}
*/

//soru2:girilen vize final notuna g�re ge�ip kald���n� g�steren kod 
/*
int main() {
	int vize, final, ortalama;
	cout << "Vize notunu giriniz:"; cin >> vize;
	cout << "Final notunu giriniz:"; cin >> final;
	ortalama = (vize * 0.4) + (final * 0.6);
	if (ortalama >= 50)
	{
		cout << "Gectiniz";
	}
	else
	{
		cout << "KALDINIZ";
	}
	return 0;

}*/

//soru3:girilen bir say�n�n tam kare olup olmad���n� g�steren program� yaz�n
/*
int main() {
	int sayi,x,y;
	cout << "gir, bir sayi:\n"; cin >> sayi;
	x = sqrt(sayi);
	y = x * x;
	if (sayi == y)
	{
		cout << "Tam kare ";
	}
	else
	{
		cout << "Tam kare degil";
	}
	return 0;
}
*/

//soru4:girilen say�n�n pozitif olup olmad���n� bulan kod 
/*
int main() {
	int sayi;
	cout << "Sayiyi giriniz:"; cin >> sayi;
	if (sayi > 0)
	{
		cout << "Pozitiftir";
	}
	else if (sayi < 0)
	{
		cout << "Negatiftir";
	}
	else
	{
		cout << "Sifirdir";
	}
	return 0;
}

*/


// soru5: 1 den kullan�c�n�n girdi�i say�ya kadar 7 nin katlar�n� ekrana yazd�ran bir kod yaz�n�z.
/*
int main() {
	int sayi,x;
	cout << "Sayiyi giriniz:"; cin >> sayi;
	x = 1;
	while (x <= sayi) {
		if (x % 7 == 0)
		{
			cout << x; cout << endl;
		}
		x
	}
	return 0;

}
*/
//kullan�c� �ifre kontrol�
/*
int main() {
	string sifre = "2323";
	string girilensifre;
	cout << "Matrix'e Hosgeldiniz\n";
	do {
		cout << "Sifrenizi giriniz:";
		cin >> girilensifre;
		cout << "Yanlis giris\n";
	} while (girilensifre != sifre);
	cout << "Basarili giris ";
	return 0;
}*/
 
//soru6: 1 den kullan�c�n�n girdi�i say�ya kadar 2ye b�l�nebilen say�lar� yazd�ran kod
/*int main() {
	int sayi;
	cout << "Lutfen sayiyi giriniz:"; cin >> sayi;
	for (int i = 1; i < sayi; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
		}
	}
	return 0;
}*/


//soru7: kullan�c�n�n girdi�i say�n�n fakt�riyelini bulan bir c++ kodu yaz�n�z.
/*int main() {
	int sayi,sonuc;
	sonuc = 1;
	cout << "Faktoriyelini almak istediginiz sayiyi yaziniz:"; cin >> sayi;
	for (int i = 1; i <= sayi; i++)
	{
		sonuc = sonuc * i;
	}
	cout << sonuc;
	return 0;
}*/

//soru8: kullan�c�n�n girdi�i say�n�n fakt�riyelini bulan bir c++ kodu yaz�n�z.geriden gelerek
/*int main() {
	int sayi, sonuc;
	sonuc = 1;
	cout << "Faktoriyelini almak istediginiz sayiyi yaziniz:"; cin >> sayi;
	for (int i = sayi; i >= 1; i--)
	{
		sonuc = sonuc * i;
	}
	cout << sonuc;
	return 0;
}*/


//soru9:kullan�c�n�n konsoldan girdi�i say�ya g�re ��gen yapan program 
/*
int main() {
	int sayi;
	cout << "sayiyi giriniz:"; cin >> sayi;
	for (int i = 1 ; i <= sayi; i++)
	{
		cout << endl;
		for (int j = 1 ; j <= i; j++) 
		{
			cout << i <<" ";
		}
	}
	return 0;
}
*/
//soru10:fiyat� ve ismi girilen �r�n�n %18 lik kdv li sat���n� bulan kodu yaz�n�z.//
/*
int main() {
	float alisfiyat, kdv, satisfiyat=0;
	string urunismi;
	cout << "Urun ismini giriniz:"; cin >> urunismi;
	cout << "Urun alis fiyatini giriniz:"; cin >> alisfiyat;
	kdv = 18.0/100.0;
	satisfiyat = (alisfiyat * kdv) + alisfiyat;
	cout << "Satis fiyati :" << satisfiyat;
	return 0;
}
*/
// soru11:klavyeden fahrenayt alan onu santigrata �eviren ekrana iki halini yazan program
/*
int main() {
	float fsicaklik, csicaklik=0;
	cout << "Lutfen fahrenhayt degerli sicakligi giriniz:"; cin >> fsicaklik;
	csicaklik = ((fsicaklik - 32) * 5) / 9;
	cout << "Fahrenhayt degeri :" << fsicaklik << "\nSantigrat degeri:" << csicaklik;
	cout << endl;
	return 0;
}*/
//soru12:kenar uzunluklar� klavyeden girilen bir dik ��genin hipoten�s�n� hesaplayan program
/*
int main() {
	int kenar1, kenar2, hesap;
	float hipotenus;
	cout << "Kenar uzunluklarini giriniz:\n"; cin >> kenar1 >> kenar2;
	hesap = (kenar1*kenar1  + kenar2*kenar2);
	hipotenus = sqrt(hesap);
	cout << "Hipotenus = " << hipotenus;
	return 0;
}*/
// soru13: 100 l�k sisteme g�re girilen ba�ar� notunu hesaplayan program� yaz�n�z.
/*
int main() {
	int vize, final;
	float ort = 0;
	cout << "Vize notunu giriniz:"; cin >> vize;
	cout << "Final notunu giriniz:"; cin >> final;
	ort = (vize * 0.4) + (final * 0.6);
	if (ort >= 90)
	{
		cout << " Harf notun: AA \n Ortalaman :" << ort;
	}
	if (ort < 90 && ort >= 80)
	{
		cout << " Harf notun: BB \n Ortalaman :" << ort;
	}
	if (ort < 80 && ort >= 70)
	{
		cout << " Harf notun : BA\ Ortaman :" << ort;
	}
	if (ort < 70 && ort >= 60)
	{
		cout << " Harf notun : CB\n Ortalaman :" << ort;
	}
	if (ort < 60 && ort >= 50)
	{
		cout << " Harf notun : CC\n Ortalaman :" << ort;
	}
	if (ort < 50)
	{
		cout << " Harf notun : FF \n KALDIN \n Harf notun:" << ort;
	}
	return 0;

}*/

/*soru14: Bir elektirik da��t�m firmas�n�n abonenin �deyece�i elektirik �cretini elektirik
kullan�m yeri(mesken:0 i� yeri:1)t�r�ne g�re hesaplatmak istiyor.
i� yerinde her kwh i�in 2tl 
meskenlerde ise ilk 50kwh kadar her bir kwh 1tl
sonra her kwh e kadar her bir kwh 2 tl 
100 kwh �st� i�in her kwh 3 tl �cretlenmektedir.
buna g�re ilk ve son saya� okuma de�erleri ve kullan�m� t�r� girildikten sonra abonenin 
�deyece�i faturay� hesaplayan program� yaz�n�z.*/
/*
int main()
{
	int ilkdeger, sondeger, deger;
	float tutar = 0;
	int mesken;
	int i, j, k;
	cout << "Kullanim yerini seciniz:(mesken:0 is yeri:1) = "; cin >> mesken;
	cout << "Sayacin ilk degerini giriniz:"; cin >> ilkdeger;
	cout << "Sayacin son degerini giriniz:"; cin >> sondeger;
	deger = sondeger - ilkdeger;
	if (mesken == 0)
	{
		if (deger <= 50)
		{
			tutar = deger * 1;
		}
		else if (deger <= 100)
		{
			tutar = 50* 1 + (deger - 50) * 2;
		}
		else  (deger > 100);
		{
			tutar = 50* 1 + 50 * 2 + (deger-100) * 3;
		}
	}
	  else if (mesken == 1)
	{
		tutar = deger * 2;

	}
	cout << "Fatura tutari :" << tutar;
	return 0;

}*/

/*��z�m 2

int main() {
	int ilkdeger, sondeger, deger;
	float tutar = 0;
	int mesken;

	cout << "Kullanim yerini seciniz (mesken: 0, is yeri: 1) = ";
	cin >> mesken;
	cout << "Sayacin ilk degerini giriniz: ";
	cin >> ilkdeger;
	cout << "Sayacin son degerini giriniz: ";
	cin >> sondeger;

	deger = sondeger - ilkdeger;

	if (mesken == 0) { // Mesken
		if (deger <= 50) {
			tutar = deger * 1; // �lk 50 kWh, 1 TL
		}
		else if (deger <= 100) {
			tutar = 50 * 1 + (deger - 50) * 2; // 50 kWh'den sonras�, 2 TL
		}
		else {
			tutar = 50 * 1 + 50 * 2 + (deger - 100) * 3; // 100 kWh �st�, 3 TL
		}
	}
	else if (mesken == 1) { // �� yeri
		tutar = deger * 2; // Her kWh, 2 TL
	}

	cout << "Fatura tutari: " << tutar << " TL" << endl;
	return 0;
}
*/












