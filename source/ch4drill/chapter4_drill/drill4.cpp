#include "std_lib_facilities.h"

bool checkUnit(string unit){

	bool acceptedUnit = false;
	vector<string> acceptableUnits = {"cm","m","in","ft"};

	for(string u: acceptableUnits ){
		if(u==unit){
			acceptedUnit=true;
		}
	}

	return acceptedUnit;
}

double getMeters(int value,string unit){
	constexpr double cm_to_m = 0.01;
	constexpr double in_to_cm = 2.54;
	constexpr double ft_to_in = 12;

	double result = 0;

	if(unit=="cm"){
		result=value*cm_to_m;
	}else if(unit=="in"){
		result=value*in_to_cm*cm_to_m;
	}else if(unit=="ft"){
		result=value*ft_to_in*in_to_cm*cm_to_m;
	}else if(unit=="m"){
		result=value;
	}

	return result;
}

int main() {

	double num;
	double meters=0;
	double sum=0;
	double min=0;
	double max=0;

	int count=0;
	
	string unit;

	vector<double> enteredValues;

	cout << "enter a value and a unit\n";
	while(cin >> num >> unit){
		if(!checkUnit(unit)){
			cout << "unit not recognisable, enter another one\n";
		}else{
			
			meters=getMeters(num,unit);
			if(min==0 && max==0){
				min=meters;
				max=meters;
			}
			if(meters>max){
				max = meters;
				cout << "largest so far\n";
			}
			if(meters< min){
				max=meters;
				cout << "smallest so far\n";
			}

			enteredValues.push_back(meters);
			++count;
			sum+=meters;
		}
	}

	cout << "values entered in meters:\n";
	for (double m : enteredValues){
		cout << m << "m ";
	}
	cout << "\n\nloop ended, values entered: " << count << "\nsum of the values: " << sum << " m\nsmallest value was: " << min << "m\nlargest value was: " << max <<"m\n";


	return 0;

}