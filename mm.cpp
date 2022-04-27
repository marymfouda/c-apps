#include<iostream>
using namespace std;
int main ()
{
long long a , b , c , answer ;
char oper , d;
 cin>> a >> oper >> b >> answer >>c ;
 if (oper == '-'){
 	answer = a-b ;
 } else if ( oper == '+' ){
 	answer = a+b ;
 }else {
 	answer = a*b ;

  } if ( answer == c ){
 	cout<<" yes ";
 }else{
 	cout<< answer ;
 }
    return 0;
}
