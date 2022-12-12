#include <iostream>
#include <cstdlib>
using namespace std;
#define size 2
int menu()
{
	int choice;
	cout<<"XXX\n";
	cout<<"welcome to you!\n";
	cout<<"(1) first class\n";
	cout<<"(2)eco class\n";
	do{
	cout<<"please input your choice";
	;
	cin>>choice;
	}
	while(choice!=1 && choice!=2);
	return choice;
}

int main()
{
	int site[size]={0};
	while(1)
	{
		int sitetype = menu();
		if(sitetype==1)
		{	//vip
		}
		else if(sitetype==2)
		{
			//eco
		}
		else
		{
			//give up
		}
	}
	return 0;
	
}
