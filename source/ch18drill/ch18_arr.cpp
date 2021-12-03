#include "../std_lib_facilities.h"

int ga [10]={1,2,4,8,16,32,64,127,256,512};

void f(int arr[],int n){
	
	int la [10];

	for(int i=0;i<10;++i)
		la[i] = ga[i];

	for(int i = 0; i<10;++i)
		cout << la[i] << " ";
	cout << "\n";

	int* p = new int[n];

	for(int i=0; i<n;++i)
		p[i] = arr[i];

	for(int i=0; i<n;++i)
		cout << p[i] << " ";
	cout << "\n";

	delete[] p;
}

int fact(int num){
	
	if(num>1)
		return num * fact(num-1);
	else
		return 1;
}

int main(){

	f(ga,10);

	int aa [10];
	for(int i=0;i<10;++i)
		aa[i]=fact(i+1);

	f(aa,10);

	return 0;
}