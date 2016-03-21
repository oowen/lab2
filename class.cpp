#include"class.h"
using namespace std;

	void BMI::bmii(float h,float m) {
		height=h;
		mass=m;
	}
	float BMI::calc() {
	return mass/((height/100)*(height/100));
}
	string BMI::category(float bmi)
	{
		if(bmi>=40)
			return "obese class III ";
		else if (35<=bmi)
			return "obese class II";
		else if (30<=bmi)
			return "obese class I";
		else if (25<=bmi)
			return "over weight";
		else if (18.5<=bmi)
			return "normal";
		else if (16<=bmi)
			return "under weight";
		else if (15<=bmi)
			return "severaly underweight";
		else
			return "very severaly underweight";
	}


