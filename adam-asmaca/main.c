#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int tahmin, rast, i;
	srand(time(NULL));
	rast=rand()%30;
	printf("   O \n  /T\\ \n  / \\  \n\n");
	printf("0-30 Arasi Bir Sayi Giriniz (Unutma 6 Hakkin var)\n ");
	for (i=1; i<=6; i++)
		{
			scanf("%d",&tahmin);
			system ("cls");
			if(tahmin<0 || tahmin>30 ){printf("Yanlis deger girdin\n Ama hakkin gitmedi\n"); i--;}
			else if (tahmin==rast)
				{
					printf("   O \n  /T\\ \n  / \\  \n\n");
					printf("Dogru Bildin TEBRIKLER... \n");
					printf("%d",i);
					printf(". hakkinda bildin !");
					goto son;
				}
			switch(i)
			{
				case 1: printf(" ______________\n             |\n"); break;
				case 2: printf(" ______________\n             |\n             O\n"); break;
				case 3: printf(" ______________\n             |\n             O\n             | \n  "); break;
				case 4: printf(" ______________\n             |\n             O\n            /|\\ \n  "); break;
				case 5: printf(" ______________\n             |\n             O\n            /|\\ \n            / \n"); break;
				case 6: printf(" ______________\n             |\n             O\n            /|\\ \n            / \\ \n\n"); break;
				default: break;
			}

			if (i==6)
				{
					printf("Hakkin Bitti ! ");
					printf("\n\n----------GAME OVER!!!----------");
			goto son;
				}
			if (tahmin<rast)
				{
					 printf("\nYANLIS tekrar dene !!!\n >Daha buyuk bir sayi gir... \n");
				}
			else	{printf("\nYANLIS tekrar dene !!!\n >Daha kucuk bir sayi gir... \n");}
		}
				son:
		getch();
		return 0;
}
