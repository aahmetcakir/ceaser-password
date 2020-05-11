#include <stdio.h>
int main()
{
	int a;
	do
	{
		int toplam = 0;
		int sayi;
		int ceaser = 0;
		printf("Sifrelenecek sayiyi giriniz: ");
		scanf("%d", &sayi);
		while (sayi > 0 || sayi < 0)
		{
			toplam = toplam * 10 + sayi % 10;
			sayi = sayi / 10;
		}
		while (toplam > 0 || toplam < 0)
		{
			if (toplam > 0)
			{
				ceaser = (ceaser * 10) + ((toplam % 10 + 3) % 10);
			}
			else
			{
				ceaser = (ceaser * 10) + ((toplam % 10 - 3) % 10);
			}
			toplam = toplam / 10;
		}
		printf("Sifrelenen sayi: %d\n", ceaser);
		printf("Devam etmek icin (1)'e basin:\n");
		scanf("%d", &a);
	} while (a == 1);
	printf("HOSCAKALIN!!!\n ");
	system("pause");
	return 0;
}
