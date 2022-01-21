#include<iostream>
using namespace std;

void foo(int *arr, int size){
	int size1=size;
	size=size-1;
	for(int i=0;i<size;i++){
		if(arr[i]==0){
			for(int j=i;j<=size;j++){
				arr[j]=arr[j+1];
			}
			arr[size--]=0;
		}
	}
	for(int i=0;i<size1;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int x[13]={1,2,0,8,8,2,3,0,1,2,3,4,0};
	foo(x,13);
}
