#include <stdio.h>

int Procenti (int *vklad, int b)
{
	int n = 0, c = 0;
	n = *vklad / 100;
	n = n * b;
	c = *vklad + n;
	return c;
}

int main()
{
	int vklad = 0, srok = 0, n = 0;
	
	printf("Введите сумму вклада: ");
	scanf("%d", &vklad);

	if (vklad < 0)
	{
		printf("Ошибка! Введите корректную сумму");
		
		return 0;
	}
		
	printf("Введите срок вклада: ");
	scanf("%d", &srok);

	if (srok > 365)
	{
		printf("Срок не должен превышать 365 дней");
		
		return 0;
	}
	
	if (srok < 0)
	{
		printf("Ошибка! Введите корректный срок");
		
		return 0;
	}


}
 
