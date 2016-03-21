#include"bmi.h"
#include <iostream>
void BMI::setheight(float h)
{
	height = h;


}

void BMI::setweight(float w)
{
	weight=w;

}
void BMI::calbmi()
{
	
	bmi=(weight/((height/100.0)*(height/100.0)));
}

float BMI::getbmi()
{

	return bmi;


} 

void BMI::bmirange()
{

	if(bmi>=40) word="Obese Class III (Very severely obese)";
	if(bmi<40&&bmi>=35) word="Obese Class II (Severely obese)";
	if(bmi<35&&bmi>=30) word="Obese Class I (Moderately obese) ";
	if(bmi<25&&bmi>=18.5) word="Normal";
	if(bmi<18.5&&bmi>=16) word="Underweight";
	if(bmi<16&&bmi>=15) word="Severely underweight";
	if(bmi<15) word="Very severely underweight";
}

string BMI::comment()
{

	return word;

}

