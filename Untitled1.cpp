#include <iostream>
using namespace std;
int main(){
	int N,x;
	cin>>N;
	int max=0;
	for(int i=0;i<N;i++){
		cin>>x;
	if(x>max)	
		max=x;
	}
	cout<<max;
	return 0;
}
