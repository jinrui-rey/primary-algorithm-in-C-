/*
�Ž��  2018302100103
���� 
*/
#include <iostream>
#include <cmath>
using namespace std;
double function(double x,double y); 

int main()
{
	double a,b;
	double intergal;
	cout<<"����������䣨b ��a)";
	cin>>a>>b;
	intergal=function(a,b);
	cout<<intergal<<endl;
	
 } 
 
 double function (double x,double y)
 {
 	double area=0.0,sum=0.0;
 	double c,m;
	 int d=1; 
 	for(;;d++)//d�Ǿ������� 
 	{
 	c=(y-x)/d;//c�Ǿ��ο�� 
	 if(c<=1e-6)
	break;
	}
	unsigned int n=0;
	double h=x;
	while(n<=(y-x)/c)
	{
		h=x+n*c;
		area=c*(h*(1+h));
		n++;//h����ÿ������x���ϵ����� 
		sum=sum+area;
	}
	return sum;
 }
