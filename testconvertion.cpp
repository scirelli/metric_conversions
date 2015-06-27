#include <string.h>
#include <iostream.h>

float Meters_Inches(int, int);
float Liters_Gallons(int, int);
float Grams_Oz(int, int);

float Test_Strings(char * unit1, long int amount, char * unit2)
{
	if( (strcmp(unit1, "meters") == 0) && (strcmp(unit2, "inches") == 0) )
		return Meters_Inches(amount, 1);
	if( (strcmp(unit1, "inches") == 0) && (strcmp(unit2, "meters") == 0) )
		return Meters_Inches(amount, 2);
	
	if( (strcmp(unit1, "liters") == 0) && (strcmp(unit2, "gallons") == 0) )
		return Liters_Gallons(amount, 1);
	if( (strcmp(unit1, "gallons") == 0) && (strcmp(unit2, "liters") == 0) )
		return Liters_Gallons(amount, 2);

	if( (strcmp(unit1, "grams") == 0) && (strcmp(unit2, "oz") == 0) )
		return Grams_Oz(amount, 1);
	if( (strcmp(unit1, "oz") == 0) && (strcmp(unit2, "grams") == 0) )
		return Grams_Oz(amount, 2);

	return 0;
}

float Meters_Inches(int amount, int whichtodo)
{
	float result=0.0;

	if(whichtodo == 1)
		result= amount/39.4; //meters to inches
	if(whichtodo == 2)
		result= amount*39.4; //inches to meters

	return result;
}

float Liters_Gallons(int amount, int whichtodo)
{
	float result=0.0;

	if(whichtodo == 1)
		result= amount*3.78; //liters to gallons
	if(whichtodo == 2)
		result= amount/3.78; //gallons to liters

	return result;
}

float Grams_Oz(int amount, int whichtodo)
{
	float result=0.0;

	if(whichtodo == 1)
		result= amount/28.25; //grams to oz
	if(whichtodo == 2)
		result= amount*28.25; //oz to grams

	return result;
}


/*
1m = 39.4in
1gallon = 3.78L
28.25grams = 1oz
*/