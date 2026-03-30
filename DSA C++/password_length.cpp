#include <iostream>
using namespace std;

int main(){
	string password;
	cout <<"Enter the password: ";
	cin >> password;
	
	if(password.length() > 8){
		cout <<"Password is valid";
	} else{
		cout <<"Password is invalid";
	}
	
	return 0;
}
