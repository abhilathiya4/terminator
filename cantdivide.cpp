#include<iostream>
using namespace std;

int main(){
	
	int a,b;
	
	cout<<"enter value of a: ";
	cin>>a;
	cout<<"enter value of b: ";
	cin>>b;
	
	try{
		
		if(b==0){
			
			throw b;
			
		}
		else{
			cout<<a/b;
			
		}
		
		
	}
	catch(int n){
		
		cout<<"cannot divide by "<<b;
		
	}
	
		
	return 0;
}
