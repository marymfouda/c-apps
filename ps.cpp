#include<iostream>
using namespace std;
int main()
{ 
int number;
cin>>number;
int copy=number;
int result =0;
while(copy){
	
	result=result+(copy%10);
	result=result*10;
	copy/=10;
	}

cout<<result/10;
if (result/10==number){
	cout<<"YES"<<endl;
	}
	else
	{
		
		cout<<"NO"<<endl;
	}




return 0;
}
