//============================================================================
// Name        : ISP.cpp
// Author      : Yamaan Bakir
// Version     :
// Copyright   : dont copy plz
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
string readCSV(){
	string input;
	string line;
	ifstream myfile;
	myfile.open("test.csv");
	for(int i = 0;myfile.good(); i++){
		getline(myfile, line, ',');
		input[i]=line[0];
		cout<<i<<": "<<input[i]<<endl;
	}
	cout<<"input: "<<input<<endl;
	myfile.close();
	return input;
}
void saveCSV(string save){
	ofstream myfile;
	myfile.open("test.csv");
	for(int i = 0; i<save.length(); i++){
		myfile<<save[i]<<",";
	}
	myfile.close();

}
int main() {
	string test = "ha noith u";
	test =readCSV();
	cout<<"test: "<<test<<endl;
	return 0;
}