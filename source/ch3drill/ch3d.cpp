#include "std_lib_facilities.h"

int main() {
	
	cout << "Enter the name of the person you want to write to\n";

	string first_name;

	cin >> first_name;

	cout << "Dear " << first_name << ",\n";

	cout << "How are you? I am fine. I miss you.\n";

	cout << "Enter the name of another friend.\n";

	string friend_name;

	cin >> friend_name;

	cout << "Have you seen " << friend_name << " lately?\n";

	cout << "Enter the sex of the other friend\n";

	char friend_sex;

	cin >> friend_sex;

	if(friend_sex=='f'){
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	}else if(friend_sex=='m'){
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	}else{
		cout << "If you see " << friend_name << " please ask them to call me.\n";
	}

	cout << "Enter the age of the recipient\n";

	int age;

	cin >> age;

	cout << "I hear you just had a birthday and you are " << age << " years old.\n";

	if(age<=0 && age>=110){
		simple_error("you're kidding!");
	}

	if(age<12){
		cout << "Next year you will be " << age+1 <<"\n";
	}else if(age==17){
		cout << "Next year you will be able to vote\n";
	}else if(age>70){
		cout << "I hope you are enjoying retirement\n";
	}

	cout << "Yours sincerely,\n____________\n____________\n";

	return 0;

}