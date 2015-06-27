#include <iostream.h>
#include <string.h>

char * Get_Input()
{
	char * input= new char [34];
	
	cout<< "Enter convertion question. \n(Note: Format of question should be...\n\t\t How many <units> are in <#> <units>?)\n\n-> ";
	cin.getline(input, 33, '?');
	
	//strcat(input, '\0');

	return input;
}