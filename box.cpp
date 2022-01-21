#include<iostream>
using namespace std;
int main(){
	int x;
	int y;
	int k=0;
	do{
		cout<<"Enter odd Number: ";
		cin>>x;
		y=x/2;
		}while(x%2==0);
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			if(i==0 || i==x-1){
				cout<<"*";
				continue;
			}
			if(j==x-1 || j==0){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
			
			if(i==y && k!=3){
				cout<<"H";
				k++;
			}
		}
		cout<<endl;
	}
}
