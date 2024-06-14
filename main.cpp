#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Hesap bilgileri ve baþlangýç bakiyesi
double bakiye = 1000.0;

// Para yatýrma fonksiyonu
void deposit(int miktar) {
    if (miktar > 0) {
        bakiye += miktar;
        cout << "Para yatýrma islemi basariyla gerceklesti. Yeni bakiye: " << bakiye << " TL" << endl;
    } else {
        cout << "Gecersiz miktar. Lutfen pozitif bir miktar girin." << endl;
    }
}
// Para çekme fonksiyonu
void ParaCekme(int miktar) {
    if (miktar > 0 && miktar <= bakiye) {
        bakiye -= miktar;
        cout << "Para cekme islemi basariyla gerceklesti. Yeni bakiye: "  << bakiye << " TL" << endl;
    } else {
        cout << "Yetersiz bakiye veya gecersiz miktar. Lutfen tekrar deneyin." << endl;
    }
}

// Bakiye sorgulama fonksiyonu
void BakiyeKontrol() {
    cout << "Hesap bakiyeniz: " << bakiye << " TL" << endl;
}

int main() {
    string sifre;
    string kontrol;
    int secim;
    int miktar;
    
    
    
	while(true){
		
		do{
		
		cout << "Lutfen 4 haneli sifre belirleyiniz: ";
    	cin >> sifre;
 	}	while(sifre.length()!=4);
		
    	if(sifre.length()!= 4){
    		cout << "4 haneli olmalidir.";
		}
		else{
			break;
		}
	
	}
			
	do {
		cout << "Lutfen sifre giriniz: ";
    	cin>>kontrol;

	}while(sifre!=kontrol);
	
    	cout << "Hos geldiniz! "<<endl;		

    	

    while (true) {
        cout << "Lutfen asagidaki islemlerden birini secin:" << endl;
    	cout << "1. Para Yatirma" << endl;
    	cout << "2. Para Cekme" << endl;
    	cout << "3. Bakiye Sorgulama" << endl;
    	cout << "4. Cikis" << endl;
		cout << "Islem secin (1/2/3/4): " <<endl;
        cin >> secim;

        switch (secim) {
            	case 1:
                	cout << "Yatirmak istediginiz miktari giriniz: ";
                	cin >> miktar;
                	deposit(miktar);
                	break;
            	case 2:
                	cout << "Cekmek istediginiz miktari giriniz: ";
                	cin >> miktar;
                	ParaCekme(miktar);
                	break;
            	case 3:
                	BakiyeKontrol();
                	break;
            	case 4:
                	cout << "Cikis yapiliyor. Iyi gunler!" << endl;
                return 0;
            	default:
                	cout << "Gecersiz islem. Lutfen tekrar deneyiniz!" << endl;
        	}
    	}	

    return 0;	 
}
