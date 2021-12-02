#include "../std_lib_facilities.h"

ostream& print_array10(ostream& os, int* a){
	os << "Output of print_array10: ";
	for (int i=0; i<10; i++)
		 os << a[i] << " ";
	os<<"\n";
	return os;
}

ostream& print_array(ostream& os, int* a, int n){
	os << "Output of print_array: ";
	for (int i=0; i<n; i++)
		 os << a[i] << " ";
	os <<"\n";
	return os;
}

ostream& print_vector(ostream& os, vector<int> a){
	os << "Output of print_vector: ";
	for(auto& elem: a)
		os << elem << " ";
	os << "\n";
	return os;
}

int main(){

	int* a = new int[10];

	for(int i=0; i<10; ++i){
		cout << a[i] << " ";
	}
	cout << "\n";
	
	print_array10(cout, a);

	delete[] a;

	int* b = new int[10];
	
	for(int i=0;i<10;++i)
		b[i]=100+i;
	print_array10(cout, b);

	delete[] b;

	int* c = new int[11];
	
	for(int i=0;i<11;++i)
		c[i]=100+i;
	print_array10(cout,c);

	delete[] c;


	int* d = new int[20];
	
	for(int i=0;i<20;++i)
		d[i]=100+i;

	print_array(cout,d,20);

	delete[] d;
	
	cout << "\nThe same with vectors: \n";

	vector<int> v10(10);

	for(int i=0;i<v10.size();++i)
		v10[i] = 100+i;
	
	print_vector(cout, v10);
	
	vector<int> v11(11);
	for(int i=0;i<v11.size();++i)
		v11[i] = 100+i;

	print_vector(cout, v11);
	
	vector<int> v20(20);
	for(int i=0;i<v20.size();++i)
		v20[i] = 100+i;
	
	print_vector(cout,v20);

	cout << "\n";
	



	return 0;
}