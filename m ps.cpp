//positive ,negative,odd,even
#include <iostream>
using namespace std;
int main(){
	int N,x;
	cin>>N;
	int positive=0;
	int negative=0;
	int odd=0;
	int even=0;	
	
	for(int i=0;i<N;i++){
		cin>>x;
	if(x<0)	{
	negative++;
	if ((x*-1)%2){
		odd++;	
	}else { 
	     even++;
	}
	else(x=!0){
		positive++;
			negative++;
	if ((x*-1)%2){
		odd++;	
	}else { 
	     even++;
	}
	
	}
	

	

	}

}

	return 0;
}
