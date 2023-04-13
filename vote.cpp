#include<iostream>
using namespace std;

int main(){
	
	int b;
	
	cout<<"ENTER YOUR AGE :  ";
	cin>>b;
	
	try{
		
		if(b<18){
			
			throw b;
			
		}
		else{
			cout<<"eligible for voting";
			
		}
		
		
	}
	catch(int n){
		
		cout<<"NOT ELIGIBLE for voting";
		
	}
	
		
	return 0;
}
