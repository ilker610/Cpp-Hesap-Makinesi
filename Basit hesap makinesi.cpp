#include <iostream>

using namespace std;

int main() {
	int ilk_sayi;
	int ikinci_sayi;

	cout << "Hesap makinesine hos geldiniz.\n";
	cout << "Lutfen ilk sayiyi giriniz:";
	cin >> ilk_sayi;
	cout << "Lutfen ikinci sayiyi giriniz:";
	cin >> ikinci_sayi;
	cout << endl;
	
	int toplam = ilk_sayi + ikinci_sayi;
	int fark = ilk_sayi - ikinci_sayi;
	float bolme = ilk_sayi / ikinci_sayi;
	int carpma = ilk_sayi * ikinci_sayi;

	cout << "Toplam:" << toplam << endl;
	cout << "Fark:" << fark << endl;
	cout << "Bolum:" << bolme << endl;
	cout << "Carpim:" << carpma << endl;
}