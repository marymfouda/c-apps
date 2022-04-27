#include<iostream>
using namespace std;
int main()
{
int a,b; 
char oper;
cin>>a>>oper>>a;
if(oper =='>'){
	if(a>b){cout<<"right";
	}else {
		cout<<"wrong";
	}
}else if (oper == '<'){if(a<b){
	cout<<"right";
}else{
cout<<"wrong";	
}
}else{if(a==b){
	cout<<"right";
}else{
	cout<<"wrong";
}
}
	return 0;
}
