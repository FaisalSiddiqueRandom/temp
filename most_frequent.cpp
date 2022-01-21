#include<iostream>
using namespace std;



int main(){
	int a[] ={1,2,3,3,4,4,4,5,5,6};
	int max=0,curr=0,res=0;
	for(int i=1;i<10;i++){
		if(a[i]==a[i-1]){
			curr++;
		}
		else{
			if(curr>max){
			max=curr;
			res=a[i-1];
			}
			curr=0;
		}
	}
	
	
	cout<<res;	
}
