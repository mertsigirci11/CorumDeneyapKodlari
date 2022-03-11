#include <iostream>

using namespace std;
//S�n�f tan�mlamak i�in class anahtar kelimesini kullan�r�z.
//S�n�f ismi b�y�k harfle ba�lar
class Araba
{
    /*
        Eri�im belirteci yaz�yoruz. 2 tane belirtecimiz var
        1-public: s�n�f�m�zda tan�mlanan de�i�kenleri ve fonksiyonlar�
                  HER TARAFTAN eri�ilebilir yapar.
        2-private:s�n�f�m�zda tan�mlanan de�i�kenleri ve fonksiyonlar�
                  SADECE s�n�f i�inden eri�ilebilir yapar.
    */
public://eri�im belirtecimizi yazd�ktan sonra verilerimizi tan�mlayabiliriz.
    string marka;
    int yil;
    string model;
    //DAH�L� FONKS�YON TANIMLAMA
    void hizlanma()
    {
        cout<<"Araba hizlaniyor..."<<endl;
    }
    void yavaslama();
private://eri�im belirtecimizi yazd�ktan sonra verilerimizi tan�mlayabiliriz.
    int motorSeriNumarasi;
};

int main()
{
    Araba nesne1;//nesnemizi tan�mlad�k lakin i�indeki de�erler bo�.
    nesne1.marka="TOGG";//nesnemizin public de�i�kenlerini tan�mlad�k
    nesne1.model="Sedan";//nesnemizin public de�i�kenlerini tan�mlad�k
    nesne1.yil=2023;//nesnemizin public de�i�kenlerini tan�mlad�k
    //nesne1.motorSeriNumarasi=4;//private oldu�u i�in bu de�i�kene sadece tan�mland��� s�n�f i�erisinden eri�ilebilir.
    /*
        nesne1.hizlanma();
        nesne1.yavaslama();

        fonksiyonlar�m�z�n i�levlerini 2 t�rl� tan�mlayabiliriz.
        1-Dahili olarak
        2-Harici olarak

    */
    nesne1.hizlanma();
    nesne1.yavaslama();

    //�imdi tan�mlad���m�z de�i�kenleri ekran�m�za yazd�ral�m.
    cout<<"Araba markasi: "<<nesne1.marka<<endl;
    cout<<"Araba modeli: "<<nesne1.model<<endl;
    cout<<"Araba yili: "<<nesne1.yil<<endl;
    return 0;

}

//HAR�C� FONKS�YON TANIMLAMA
void Araba :: yavaslama()
{
    cout<<"Araba yavasliyor..."<<endl;
}
