#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int i,count = 0;
	char pass[50];
	char na[] = "Not valid";
	cout<<"Create your Password : ";
	cin>>pass;

	try{
	
		
			for(i=0 ; i<strlen(pass) ; i++){
				
				if(pass[i]>='A' && pass[i]<='Z'){
					count = 1;
				}	
			}
			
			if(count == 1){
					
				cout<<"Valid";
			}
			else{
				throw na;
			}
	}
	catch(char n[]){
		
			cout<<n;
		}
	
	
	return 0;
}
