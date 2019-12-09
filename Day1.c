#include<stdio.h>

int main()
{
	FILE *input_mass;
	int x;
	int mass_array[100];
	int total_fuel=0;
	int fuel;
	int cont;
	input_mass =fopen("D1_mass.txt","r");
	
	if (input_mass==NULL)
		return 1;
	
	for (x=0; x<100; x++)
	{
		fscanf(input_mass, "%d", &mass_array[x]);
	}
	
//	fclose(input_mass);	
	
	for (x=0; x<100; x++)
	{
		fuel=mass_array[x];
		cont=1;
		while(cont==1)
		{
			fuel=(fuel/3)-2;
			if (fuel>0)
			{
				total_fuel=total_fuel+fuel;
			}
			else
			{
				cont=0;
			}
		}
	}
	printf ("%d",total_fuel);
	return(0);
}
