/*
�Ž�� 2018302100103
 
*/
#include <iostream>
using namespace std;
#define size 10
int main()
{
    int a[size][size];
	int j;
	int *max[size];
	int *min[size];
	int m,n,c,i;
    cout<<"����������n��\n";
    cin>>n;
    cout<<"����һ��"<<n<<"*"<<n<<"�ľ���\n";
    for (i=0;i<n;i++)
    	for (j=0;j<n;j++)
            cin>>a[i][j];
		for (i=0;i<n;i++)
    {
        max[i]=&a[i][0];
        for (j=0;j<=2;j++)
        {
            if (*max[i]<a[i][j])
                max[i]=&a[i][j];
        }
    }
  
    for(j=0;j<=n-1;j++)
    {
        min[j]=&a[0][j];
        for(i=0;i<=2;i++)
        {
            if (*min[j]>a[i][j])
                min[j]=&a[i][j];
        }
    }
    c=0;
    for(i=0;i<=n-1;i++)
        for(j=0;j<=n-1;j++)
            if (max[i]==min[j] && *max[i]==*min[j])
            {
                m=i+1;
                n=j+1;
                c++;
                cout<<"����Ϊ:"<<*max[i]<<"\tλ��:("<<m<<","<<n<<")"<<endl;
                return 0;
        }
        if (c==0)
            cout<<"�þ����ް��㣡\n";
}

