#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int main()
{
	char aukSorn;
	scanf("%c", &aukSorn);
	char x = tolower(aukSorn);
	switch (x)
	{
	case 'a':
	{
		printf("Austria");
		break;
	}
	case 'b':
	{
		printf("Brazil");
		break;
	}
	case 'c':
	{
		printf("Canada");
		break;
	}
	case 'd':
	{
		printf("Denmark");
		break;
	}
	case 'e':
	{
		printf("Egypt");
		break;
	}
	case 'f':
	{
		printf("France");
		break;
	}
	case 'g':
	{
		printf("Germany");
		break;
	}
	case 'h':
	{
		printf("Hongkong");
		break;
	}
	case 'i':
	{
		printf("Israel");
		break;
	}
	case 'j':
	{
		printf("Japan");
		break;
	}
	case 'k':
	{
		printf("Kazakhstan");
		break;
	}
	case 'l':
	{
		printf("Latvia");
		break;
	}
	case 'm':
	{
		printf("Mexico");
		break;
	}
	case 'n':
	{
		printf("Norway");
		break;
	}
	case 'o':
	{
		printf("Oman");
		break;
	}
	case 'p':
	{
		printf("Portugal");
		break;
	}
	case 'q':
	{
		printf("Qatar");
		break;
	}
	case 'r':
	{
		printf("Russia");
		break;
	}
	case 's':
	{
		printf("Switzerland");
		break;
	}
	case 't':
	{
		printf("Thailand");
		break;
	}
	case 'u':
	{
		printf("United Kingdom");
		break;
	}
	case 'v':
	{
		printf("Vatican City");
		break;
	}
	case 'w':
	{
		printf("Warsaw");
		break;
	}
	case 'x':
	{
		printf("Xiangfan");
		break;
	}
	case 'y':
	{
		printf("Yemen");
		break;
	}
	case 'z':
	{
		printf("Zambia");
		break;
	}
	}
}