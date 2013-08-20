#include <stdio.h>

int main(int argc, char const *argv[])
{
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char initial = 'A';
	char first_name[] = "Adan";
	char last_name[] = "Alvarado";
	int *pdistance = &(distance);

	printf("Your are %d miles away \n", distance);
	printf("you have %f levels of power\n", power);
	printf("you have %f awesome super powers\n", super_power);
	printf("I have an initial %c\n", initial);
	printf("I have a first name %s\n", first_name);
	printf("I have a last name %s \n", last_name);

	// fixing the break
	/*printf("My whole name is %s %c. %s\n", initial, first_name,  last_name);*/
	printf("My whole name is %s %c. %s\n", first_name, initial, last_name);
	printf("memaddress %p \n", pdistance);
	printf("pointer to int %d \n", *(pdistance));
	return 0;
}
