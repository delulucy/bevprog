#include "../std_lib_facilities.h"

 struct Point {
 	int x;
 	int y;
 };

 vector<Point> xyIn(){
	cout << "enter 7 pairs of x and y\n";	
 	vector<Point> original_points;
 	int x;												
 	int y;
 	while(original_points.size()<7){
 		if(cin >> x >> y)
 			original_points.push_back(Point{x, y});
 		else
 			error("only numbers are allowed");
 	}

 	return original_points;
 }

 void output(vector<Point> original_points){
 	int x;
 	int y;
 	cout << "content of original_points vector:\n";
 	for(auto& elem : original_points)
 		cout  << elem.x << ' ' << elem.y << '\n'; 
}

void printInFile(vector<Point> original_points){
	string ofname = "mydata.txt";
	ofstream ofile {ofname};
	if(!ofile) error("something went wrong");	
 	for(auto& Point : original_points){
 		ofile << Point.x << ' ' << Point.y << '\n';
 	}
 	ofile.close();
}

vector<Point> readFromFile(){
	int x,y;
	ifstream ifile {"mydata.txt"};
 	if(!ifile) error("something went wrong");
 	vector<Point> processed_points;
 	while(ifile >> x >> y){
 		processed_points.push_back(Point{x,y});
 	}
 	cout << "\n\nProcessed points:\n";
 	for(auto& elem : processed_points){
 		cout  << elem.x << ' ' << elem.y << '\n'; 
 	}
 	ifile.close();
 	return processed_points;

}

 int main(){
 	try{

 	if(xyIn().size() != readFromFile().size()) error("something went wrong");

 	return 0;

 	}
 	catch(runtime_error& e){
 		cerr << e.what() << "\n";
 		return 1;
 	}  
 	catch(...){
 		cerr << "error" << '\n';
 		return 2;
 	}
 } 