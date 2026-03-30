#include <iostream>
#include <string>
using namespace std;

int main(){
	char str[100];
	cout <<"Enter the name: ";
	cin.getline(str,100);
	
	int length = 0;
	while(str[length] != '\0'){
		length++;
	}
	cout <<"Length: "<< length;
	
	for(int i=0; i<length; i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] = str[i] - 32;
		}
	}
	cout << "\nUppercase: "<< str; 
}
