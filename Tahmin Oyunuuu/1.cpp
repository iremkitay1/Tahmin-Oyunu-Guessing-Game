#include <iostream>
using namespace std;

void AnaMenu();

void AnaMenu()
{
    int secim = 0;

    cout << "Merhaba, oyunumuza ho�geldiniz, l�tfen birini se�iniz! " << endl;
    cout << "1- Tek ki�ilik oyun" << endl;
    cout << "2- �ki ki�ilik oyun" << endl;
    cout << "SE��M�N�Z:";
    cin >> secim;
    if (secim == 1)
    {
        system("cls");
        srand(time(0));
        int say� = rand() % 100 + 1;
        int tahmin;
        string oyuncu;
        int sayac = 0;

        cout << "1-100 aras�nda rastgele bir say� belirlendi, oyunumuz ba�l�yor!" << endl;

        cout << endl;
        cout << "L�tfen oyuncunun ad�n� giriniz: ";
        cin >> oyuncu;

        while (true)
        {
            cout << endl;
            cout << "L�tfen tahmininizi giriniz, " << oyuncu << ": ";
            cin >> tahmin;
            sayac++;

            if (tahmin > say�)
            {
                cout << "Daha k���k bir say� tahmin edin!" << endl;
            }
            else if (tahmin < say�)
            {
                cout << "Daha b�y�k bir say� tahmin edin!" << endl;
            }
            else if (tahmin = say�)
            {
                cout << "Tebrikler! Say�y� " << sayac << ". denemede buldunuz!" << endl;
                int secim2 = 0;

                cout << "Yeniden oynamak ister misiniz? " << endl;
                cout << "1- Evet" << endl;
                cout << "2- Hay�r" << endl;
                cout << "SE��M�N�Z:";
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
        int say� = rand() % 100 + 1;
        int tahmin1, tahmin2;
        string oyuncu1, oyuncu2;

        cout << "1-100 aras�nda rastgele bir say� belirlendi, oyunumuz ba�l�yor!" << endl;

        cout << endl;
        cout << "L�tfen ilk oyuncunun ad�n� giriniz: ";
        cin >> oyuncu1;
        cout << "L�tfen ikinci oyuncunun ad�n� giriniz: ";
        cin >> oyuncu2;

        while (true)
        {
            cout << endl;
            cout << "Birinci oyuncunun tahminini giriniz, " << oyuncu1 << ": ";
            cin >> tahmin1;
            cout << "�kinci oyuncunun tahminini giriniz, " << oyuncu2 << ": ";
            cin >> tahmin2;
            cout << endl;

            if (tahmin1 == say� && tahmin2 == say�)
            {
                cout << "Tebrikler, her iki oyuncu da do�ru tahminde bulundu!" << endl;
                int secim3 = 0;

                cout << "Yeniden oynamak ister misiniz? " << endl;
                cout << "1- Evet" << endl;
                cout << "2- Hay�r" << endl;
                cout << "SE��M�N�Z:";
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
            else if (tahmin1 == say�)
            {
                cout << "Tebrikler, oyunun kazanan� " << oyuncu1 << " oldu!" << endl;
                int secim3 = 0;

                cout << "Yeniden oynamak ister misiniz? " << endl;
                cout << "1- Evet" << endl;
                cout << "2- Hay�r" << endl;
                cout << "SE��M�N�Z:";
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
            else if (tahmin2 == say�)
            {
                cout << "Tebrikler, oyunun kazanan� " << oyuncu2 << " oldu!" << endl;
                int secim3 = 0;

                cout << "Yeniden oynamak ister misiniz? " << endl;
                cout << "1- Evet" << endl;
                cout << "2- Hay�r" << endl;
                cout << "SE��M�N�Z:";
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
                if (tahmin1 > say�)
                {
                    cout << "Birinci oyuncunun tahmini y�ksek." << endl;
                }
                else if (tahmin1 < say�)
                {
                    cout << "Birinci oyuncunun tahmini d���k." << endl;
                }
                if (tahmin2 > say�)
                {
                    cout << "�kinci oyuncunun tahmini y�ksek." << endl;
                }
                else if (tahmin2 < say�)
                {
                    cout << "�kinci oyuncunun tahmini d���k." << endl;
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