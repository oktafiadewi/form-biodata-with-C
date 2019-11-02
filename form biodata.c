#include <stdio.h>

int main ()
{
	char name[100], address[100], birthDate[10];
	int age;
	
	printf ("Form Biodata\n");
	
	printf ("Enter your name : ");
	scanf ("%s", &name);
	
	printf ("Enter your address : ");
	scanf ("%s", &address);
	
	printf ("Enter your age : ");
	scanf ("%d", &age);
	
	printf ("Enter your birth date (dd-mm-yyyy) : ");
	scanf ("%s", &birthDate);
	
	printf ("\n-------------------\n");
	printf ("Name : %s \n", name);
	printf ("Address : %s \n", address);
	printf ("Age : %d \n", age);
	printf ("Birth Date : %s", birthDate);
	return 0;
}
