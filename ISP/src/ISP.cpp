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
	string in;
	int count = 0;
	string line;
	ifstream myfile;
	myfile.open("test.csv");
	while(myfile.good()){
		count ++;
		getline(myfile, line, ',');
	}

	myfile.close();
	return in;
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
	cout<<test<<endl;
	return 0;
}
