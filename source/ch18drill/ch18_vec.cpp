#include "../std_lib_facilities.h"

vector<int> gv{1,2,4,8,16,32,64,128,256,512};

void f(vector<int> v){
	
	vector<int> lv(v.size());

	lv = gv;

	for(auto& elem:lv)
		cout << elem << " ";
	cout << "\n";

	vector<int> lv2 = v;

	for(auto& elem:lv2)
		cout << elem << " ";
	cout << "\n";
}

int fact(int num){
	
	if(num>1)
		return num * fact(num-1);
	else
		return 1;
}

int main(){

	f(gv);
	vector<int> vv(10);
	for(int i=0;i<vv.size();++i){
		vv[i]=fact(i+1);
	}
	f(vv);

	return 0;
}