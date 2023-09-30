#include <stdio.h>

int main(void)
{
	int qut;
	int amt;
	float rate, disc;

	printf("Enter quantity\n");
	scanf("%d", &qut);
	printf("Enter rate\n");
	scanf("%f", &rate);

	amt = qut * rate;

	if (amt >= 500)
		disc = amt * 0.9;
	else
		disc = amt;
	printf("\n\tNet price is %.2f\n", disc);

	return (0);
}
