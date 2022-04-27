//write c++ program print the day name that user entered the day number
#include<iostream>
using namespace std;
int main(){
	int week;
	cout<<"enter week number:";
	cin>>week;
	switch (week) {
		case 1:
			cout<<"saturday";
			break;
		case 2:
			cout<<"sunday";
			break;
		case 3:
			cout<<"monday";
			break;
		case 4:
			cout<<"tuesday";
			break;
		case 5:
			cout<<"wednesday";
			break;
		case 6:
			cout<<"thursday";
			break;
		case 7:
			cout<<"friday";
			break;
		default:
			cout<<"Error ,Enter week number between 1 to 7";
			break;
	system("pause");
    }


}
