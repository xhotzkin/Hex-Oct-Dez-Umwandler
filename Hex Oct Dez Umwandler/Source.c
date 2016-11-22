#include <stdio.h>

int main(void)
{
	char cEingabe = 'a';
	int Oktalzahl = 0;
	int Dezimalzahl = 0;
	int Hexadezimalzahl = 0;
	int dummy = 0;
	printf("Wollen Sie eine (O)ktal-, eine He(x)adezimal- oder eine (D)ezimal-Zahl eingeben: "); 
	scanf("%c", &cEingabe);
	switch (cEingabe)
	{
	case 'o':
	case 'O' :
		printf("Oktalzahl eingeben: ");
		scanf("%o", &Oktalzahl);
		printf("\nDezimalzahl: %d\nHexadezimalzahl : 0x%x\n", Oktalzahl, Oktalzahl);
		break;
	case 'x':
	case 'X':
		printf("Hexadezimalzahl eingeben: ");
		scanf("%x", &Hexadezimalzahl);
		printf("\nDezimalzahl: %d\nOktalzahl: %o\n", Hexadezimalzahl, Hexadezimalzahl);
		break;
	case 'd':
	case 'D':
		printf("Dezimalzahl eingeben: ");
		scanf("%d", &Dezimalzahl);
		printf("\nOktalzahl: %o\nHexadezimalzahl: 0x%x\n", Dezimalzahl, Dezimalzahl);
		break;
	}
	printf("Fenster schliessen!");
	scanf("%d", &dummy);
	return 0;

}