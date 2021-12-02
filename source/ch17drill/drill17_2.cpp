#include "../std_lib_facilities.h"

ostream& print_array(ostream& os, int* a, int n){
	os << "Output of print_array: ";
	for (int i=0; i<n; i++)
		 os << a[i] << " ";
	os <<"\n";
	return os;
}

int main(){

	int a = 7;
    int* p1 = &a;

    cout << "p1==" << p1 << " *p1== " << *p1 << '\n';

    int* p2 = new int[7];

    int x = 1;
    for (int i = 0; i < 7; ++i) {
        p2[i] = x;
        x *= 2;
    }

    cout << "p2==" << p2 << " *p2==" << *p2 << '\n';

    int* p3 = p2;
    p2 = p1;
    p2 = p3;

    cout << "p1==" << p1 << " *p1== " << *p1 << '\n';
    cout << "p2==" << p2 << " *p2==" << *p2 << '\n';

    delete[] p2;

    p1 = new int[10];

    x=1;
    for(int i=0;i<10;++i){
    	p1[i]=x;
    	x*=2;
    }

    p2 = new int[10];

    for(int i= 0; i<10; ++i)
    	p2[i] = p1[i];

    delete[] p1;
    delete[] p2;

    vector<int> v1(10);
    x=1;
    for(auto& elem: v1){
    	elem=x;
    	x*=2;
    }

    vector<int> v2(10);
    for(int i=0;i<v2.size();++i){
    	v2[i]=v1[i];
    }
    

	return 0;
}