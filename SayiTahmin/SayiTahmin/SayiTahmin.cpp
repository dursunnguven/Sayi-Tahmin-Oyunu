/*SAYI TAHMİN OYUNU*/

#include <iostream>
#include <stdlib.h>  //random sayı üretmeyi sağlayan kütüphane
#include <ctime>	//pc zamanı ile programın zamanını senkronize eden kütüphane

using namespace std;

int main(){
	int sayi;
	char cevap ='e';
	srand(time(NULL));
	cout << "SAYI TAHMIN OYUNU" << endl << endl;
	while (cevap=='e')
	{
		int sayi2 = rand() % 100; //0dan 100e kadar rastgele sayı üretir
		cout << "Bir sayi tuttum hadi tahmin et:)" << endl;
		cin >> sayi;

		while (sayi != sayi2) {
			if (sayi>sayi2)
			{
				cout << "daha kucuk bir sayi gir." << endl;
			}
			else
			{
				cout << "daha buyuk bir sayi gir." << endl;
			}
			cin >> sayi;
		}
		cout << "Tahminin Dogru.Tebrikler!!!" << endl;
		cout << "Devam Etmek Ister Misin?(e veya h)" << endl;
		cin >> cevap;

	}





}
