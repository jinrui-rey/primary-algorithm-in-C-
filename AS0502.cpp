/**
2018302100103	�Ž��
 ������ 
*/
#include <iostream>
using namespace std;
#define size 10
int main()
{
	int n,i,num[size],k;
	cout<<"input a number";
	cin>>n;
	int len=0;
	while(n>0)
	{
		num[len]=n%10;
		n=n/10;
		len++;
	}
	cout<<"������"<<endl;
	for(k=len-1;k>=0;k--)
	cout<<num[k]<<'\t';
	if(num[k]=num[size-k])
	cout<<"\n�ǻ�����";
	else 
	cout<<"���ǻ�����";
	return 0;
	}
	

