#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

	char* presidents[] = {"George Washington", "Abe Lincoln", "Herbert Hoover"};
	for(int i = 0;i < 3;i++)
	{
		//create a copy of the string
		char* p_copy = malloc(strlen(presidents[i]) + 1);
	    strcpy(p_copy, presidents[i]);

		//find where the first and last name are separated
		int pos = strstr(presidents[i], " ") - presidents[i];

		//print the first name, a comma, and then the last name
		char firstname[100];
        strncpy(firstname, presidents[i], pos);
		printf("%s, ", presidents[i] + pos);	
		printf("%s\n", firstname) ;
    }

	return 0;
}
