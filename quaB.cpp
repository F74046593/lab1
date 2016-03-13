#include<iostream>
using namespace std;
int main()
{
        int N,a;
        cout<<"Enter a number ";
        cin>>a;
        while(a>1)
        {
        if(a%2==1)
        {       a=a*3+1;
		cout<<a<<" ";
	}
        else
        {       a=a/2;
		cout<<a<<" ";
	}	
        }
	cout<<"\n";
        return 0;
}

