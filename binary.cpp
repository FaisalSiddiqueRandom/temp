#include<iostream>
using namespace std;

void binary(int val){
	int a[32],i=0;
	while(val>0){
		a[i]=val%2;
		val=val/2;
		i++;
		
	}
	for(int j=i-1;j>=0;j--){
		cout<<a[j];
	}
}

int main(){
	binary(32);
}
