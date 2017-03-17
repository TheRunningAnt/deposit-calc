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

	
	if (vklad <= 100000)
	{
		if (srok <= 30)
		{
			n = Procenti(&vklad, -10);
			printf("Итоговая сумма: %d\n", n);
			
			return 0;
		}
		
		if (srok <= 120)
		{
			n = Procenti(&vklad, 2);
			printf("Итоговая сумма: %d\n", n);
			
			return 0;
		}
		
		if (srok <= 240)
		{
			n = Procenti(&vklad, 6);
			printf("Итоговая сумма: %d\n", n);
			
			return 0;
		}
		
		if (srok <= 365)
		{
			n = Procenti(&vklad, 12);
			printf("Итоговая сумма: %d\n", n);
			
			return 0;
		}
	}
	
	if (vklad > 100000)
	{
		if (srok <= 30)
		{
			n = Procenti(&vklad, -10);
			printf("Итоговая сумма: %d\n", n);
			
			return 0;
		}
		
		if (srok <= 120)
		{
			n = Procenti(&vklad, 3);
			printf("Итоговая сумма: %d\n", n);
			
			return 0;
		}
		
		if (srok <= 240)
		{
			n = Procenti(&vklad, 8);
			printf("Итоговая сумма: %d\n", n);
			
			return 0;
		}
		
		if (srok <= 365)
		{
			n = Procenti(&vklad, 15);
			printf("Итоговая сумма: %d\n", n);
			
			return 0;
		}
	}
}
 
