/*
�Ž��  2018302100103
�Ƚϴ�С 
*/
#include <iostream>
#include <cmath>
using namespace std;
int min(int a,int b);
double min(double a ,double b);

int main()
{
	int a,b;
	cout<<"����һ������"<<'\n';
	cin>>a>>b;
	min(a,b);
	cout<<"��СֵΪ"<<min(a,b)<<'\n3';
	double c,d;
	cout<<"����һ��ʵ��"<<'\n';
	cin>>c>>d;
	min(c,d);
	cout<<"��СֵΪ"<<min(c,d);
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
