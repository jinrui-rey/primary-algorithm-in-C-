/*
张锦睿  2018302100103
积分 
*/
#include <iostream>
#include <cmath>
using namespace std;
double function(double x,double y); 

int main()
{
	double a,b;
	double intergal;
	cout<<"输入积分区间（b ≥a)";
	cin>>a>>b;
	intergal=function(a,b);
	cout<<intergal<<endl;
	
 } 
 
 double function (double x,double y)
 {
 	double area=0.0,sum=0.0;
 	double c,m;
	 int d=1; 
 	for(;;d++)//d是矩形数量 
 	{
 	c=(y-x)/d;//c是矩形宽度 
	 if(c<=1e-6)
	break;
	}
	unsigned int n=0;
	double h=x;
	while(n<=(y-x)/c)
	{
		h=x+n*c;
		area=c*(h*(1+h));
		n++;//h代表每个矩形x轴上的坐标 
		sum=sum+area;
	}
	return sum;
 }
