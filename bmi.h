#include<string>
#include<fstream>
#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
class BMI {
	public:
		void setheight(float h);
		void setweight(float w);
		void calbmi();
		float getbmi();
		void bmirange();
		string comment();
	private:
		float height;
		float weight;
		float bmi;	
		string word;
};

