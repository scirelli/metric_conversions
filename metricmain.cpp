// sting to long int does't work.

#include <iostream.h>
#include <string.h>
#include <stdlib.h>

char * Get_Input();
float Test_Strings(char *, long int, char *);

void main()
{
	
	char * inputArray[9];
	char * input= new char [33];
	int i=1;
	long int number=0;
	
	strcpy(input,Get_Input());
	inputArray[0] = strtok(input, " ");       //tokenize the string
	while(inputArray[i-1] != NULL)            //and stores the tokens in char of pointers
	{                                         //
		inputArray[i] = strtok(NULL, " ");    //
		i++;
	}
	
	number = strtol(inputArray[5], NULL, 10); //converts string to long int	
	cout<< "\n" << Test_Strings(inputArray[2], number, inputArray[6]);	
	
	return;
}

/*
1m = 39.4in
1gallon = 3.78L
28.25grams = 1oz
*/
//strtol(stopstring, NULL, 10); //converts string to long int