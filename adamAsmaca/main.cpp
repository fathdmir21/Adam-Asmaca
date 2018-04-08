#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <fstream> //Dosyalama iþlemleri için gerekli olan kütüphane.
#define M 20

using namespace std;
void oyun(char[], char[]);
void adam(int);

int main()
{

    char kelime[M];
    char kelime1[M];
    string kelime2="fuckthesystem";


          ifstream fileread;
          fileread.open("hazne.txt", ios::in);
          int sayac = 0;

          srand(time(NULL));
          int rastgeleSayi = rand() % 15;

   while(getline(fileread, kelime2))
   {
     ++sayac;
     if(sayac == rastgeleSayi)
       break;
   }



   for(int i=0; i<M; i++)
   {
       kelime[i]=kelime2[i];
   }


    int kr=strlen(kelime);
    cout<<"Bulman gereken kelime "<<kr<<" harfli"<<endl;

    for(int i=0; i<kr; i++)
    {
        kelime1[i]='_';
        cout<<kelime1[i]<<" ";
    }
    cout<<("\n\n   O \n  /T\\ \n  / \\  \n")<<endl;

    oyun(kelime,kelime1);

    return 0;
}

void oyun(char kelime[],char kelime1[])
{
    char harf;
    int yer=-1;
    int sayac=0;
    while(sayac<6)
    {
        if(strcmp(kelime,kelime1)==-1)
        {
            cout<<"\n\nKazandin !"<<endl;
            break;
        }
        yer=-1;
        cout << "\nBir harf giriniz:"<< endl;
        cin >> harf;
        for(int i=0; kelime[i]!='\0'; i++)
        {
            if(kelime[i]==harf)
                yer=i;
            kelime1[yer]=harf;
        }

        if(yer==-1)
        {
            sayac++;
            adam(sayac);
        }
        else adam(sayac);

        cout<<"\n\n";
        for(int i=0; kelime[i]!='\0'; i++)
        {
            cout<<kelime1[i]<<" ";
        }
    }
    if (sayac==6)
    {
        cout<<("\n\nHakkin Bitti ! ");
        cout<<("\n----------GAME OVER!!!----------");
    }
}

void adam(int i)
{
    switch(i)
    {
    case 1:
        cout<<(" ____________\n  \t  | \n");
        break;
    case 2:
        cout<<(" ____________\n  \t  | \n \t  O \n");
        break;
    case 3:
        cout<<(" ____________\n  \t  | \n \t  O \n \t  | \n  ");
        break;
    case 4:
        cout<<(" ____________\n  \t  | \n \t  O \n \t /|\\ \n  ");
        break;
    case 5:
        cout<<(" ____________\n  \t  | \n \t  O \n \t /|\\ \n \t /  \n");
        break;
    case 6:
        cout<<(" ____________\n  \t  | \n \t  O \n \t /|\\ \n \t / \\ \n\n");
        break;
    default:
        break;
    }
}






