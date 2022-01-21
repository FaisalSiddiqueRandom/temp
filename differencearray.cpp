#include<iostream>
using namespace std;

void difference(int a[],int b[],int alength,int blength){
	int c[alength];
	bool flag=true;
	int k=0;
	for(int i=0;i<alength;i++){
		for(int j=0;j<blength;j++){
			if(a[i]==b[j]){
				flag=false;
			}
		}
		if(flag){
			c[k++]=a[i];
		}
		flag=true;
	}
	for(int i=0;i<k;i++){
		cout<<c[i]<<" ";
	}
}
int main(){
	int a[]={1,2,3,4,5,6,7,8,9};
	int b[]={2,4,6,8,10};
	difference(a,b,9,5);
}
