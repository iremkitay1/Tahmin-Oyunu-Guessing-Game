#include <iostream>
using namespace std;

void AnaMenu();

void AnaMenu()
{
    int secim = 0;

    cout << "Merhaba, oyunumuza hoşgeldiniz, lütfen birini seçiniz! " << endl;
    cout << "1- Tek kişilik oyun" << endl;
    cout << "2- İki kişilik oyun" << endl;
    cout << "SEÇİMİNİZ:";
    cin >> secim;
    if (secim == 1)
    {
        system("cls");
        srand(time(0));
        int sayı = rand() % 100 + 1;
        int tahmin;
        string oyuncu;
        int sayac = 0;

        cout << "1-100 arasında rastgele bir sayı belirlendi, oyunumuz başlıyor!" << endl;

        cout << endl;
        cout << "Lütfen oyuncunun adını giriniz: ";
        cin >> oyuncu;

        while (true)
        {
            cout << endl;
            cout << "Lütfen tahmininizi giriniz, " << oyuncu << ": ";
            cin >> tahmin;
            sayac++;

            if (tahmin > sayı)
            {
                cout << "Daha küçük bir sayı tahmin edin!" << endl;
            }
            else if (tahmin < sayı)
            {
                cout << "Daha büyük bir sayı tahmin edin!" << endl;
            }
            else if (tahmin = sayı)
            {
                cout << "Tebrikler! Sayıyı " << sayac << ". denemede buldunuz!" << endl;
                int secim2 = 0;

                cout << "Yeniden oynamak ister misiniz? " << endl;
                cout << "1- Evet" << endl;
                cout << "2- Hayır" << endl;
                cout << "SEÇİMİNİZ:";
                cin >> secim2;

                if (secim2 == 1)
                {
                    system("cls");
                    AnaMenu();
                }
                else if (secim2 == 2)
                {
                    break;
                }
            }
        }

    }
    else if (secim == 2)
    {
        system("cls");

        srand(time(0));
        int sayı = rand() % 100 + 1;
        int tahmin1, tahmin2;
        string oyuncu1, oyuncu2;

        cout << "1-100 arasında rastgele bir sayı belirlendi, oyunumuz başlıyor!" << endl;

        cout << endl;
        cout << "Lütfen ilk oyuncunun adını giriniz: ";
        cin >> oyuncu1;
        cout << "Lütfen ikinci oyuncunun adını giriniz: ";
        cin >> oyuncu2;

        while (true)
        {
            cout << endl;
            cout << "Birinci oyuncunun tahminini giriniz, " << oyuncu1 << ": ";
            cin >> tahmin1;
            cout << "İkinci oyuncunun tahminini giriniz, " << oyuncu2 << ": ";
            cin >> tahmin2;
            cout << endl;

            if (tahmin1 == sayı && tahmin2 == sayı)
            {
                cout << "Tebrikler, her iki oyuncu da doğru tahminde bulundu!" << endl;
                int secim3 = 0;

                cout << "Yeniden oynamak ister misiniz? " << endl;
                cout << "1- Evet" << endl;
                cout << "2- Hayır" << endl;
                cout << "SEÇİMİNİZ:";
                cin >> secim3;

                if (secim3 == 1)
                {
                    system("cls");
                    AnaMenu();
                }
                else if (secim3 == 2)
                {
                    break;
                }
            }
            else if (tahmin1 == sayı)
            {
                cout << "Tebrikler, oyunun kazananı " << oyuncu1 << " oldu!" << endl;
                int secim3 = 0;

                cout << "Yeniden oynamak ister misiniz? " << endl;
                cout << "1- Evet" << endl;
                cout << "2- Hayır" << endl;
                cout << "SEÇİMİNİZ:";
                cin >> secim3;

                if (secim3 == 1)
                {
                    system("cls");
                    AnaMenu();
                }
                else if (secim3 == 2)
                {
                    break;
                }
            }
            else if (tahmin2 == sayı)
            {
                cout << "Tebrikler, oyunun kazananı " << oyuncu2 << " oldu!" << endl;
                int secim3 = 0;

                cout << "Yeniden oynamak ister misiniz? " << endl;
                cout << "1- Evet" << endl;
                cout << "2- Hayır" << endl;
                cout << "SEÇİMİNİZ:";
                cin >> secim3;

                if (secim3 == 1)
                {
                    system("cls");
                    AnaMenu();
                }
                else if (secim3 == 2)
                {
                    break;
                }
            }
            else
            {
                if (tahmin1 > sayı)
                {
                    cout << "Birinci oyuncunun tahmini yüksek." << endl;
                }
                else if (tahmin1 < sayı)
                {
                    cout << "Birinci oyuncunun tahmini düşük." << endl;
                }
                if (tahmin2 > sayı)
                {
                    cout << "İkinci oyuncunun tahmini yüksek." << endl;
                }
                else if (tahmin2 < sayı)
                {
                    cout << "İkinci oyuncunun tahmini düşük." << endl;
                }
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Turkish");
    AnaMenu(); 
    return 0;
}