#include<fstream>
#include<iostream>
#include<string>
#include<cstdlib>
#include"class.h"
using namespace std;
int main()
{
	float height,mass;
	BMI object;
	ifstream infile("file_in",ios::in);
	ofstream outfile("file_out",ios::out);
	if(!infile)
	{	cerr << "file not exist" << endl;
		exit(1);}
	while(infile>>height>>mass)
		{
			if(height==0)
			break;

		object.bmii(height,mass);
		outfile<<object.calc()<<"\t"<<object.category(object.calc())<<endl;
	
		}
	return 0;
}
