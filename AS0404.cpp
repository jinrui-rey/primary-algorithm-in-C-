/*
张锦睿  2018302100103
比较大小 
*/
#include <iostream>
#include <cmath>
using namespace std;
int min(int a,int b);
double min(double a ,double b);

int main()
{
	int a,b;
	cout<<"输入一组整数"<<'\n';
	cin>>a>>b;
	min(a,b);
	cout<<"最小值为"<<min(a,b)<<'\n3';
	double c,d;
	cout<<"输入一组实数"<<'\n';
	cin>>c>>d;
	min(c,d);
	cout<<"最小值为"<<min(c,d);
	return 0;
}

int min(int a,int b)
{
	if(a>b)
	return b;
	else return a;
}
double min(double a ,double b)
{
	if(a>b)
	return b;
	else return a;
}
