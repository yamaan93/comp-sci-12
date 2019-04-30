//============================================================================
// Name        : modules.cpp
// Author      : Yamaan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;
int word_count(string in);
string search_replace(string *in);
int main() {
	string boi = "boi is go";
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout<<word_count(boi)<<endl;
	return 0;
}

int word_count(string in){
	int word = 0;
	for(int i=0; i<in.length();i++){
		cout<<in[i]<<endl;
		if(in[i]==' '){
			word++;
		}
	}

	if(in.length()==0){
		word=0;
	}
	else{
		word++;
	}

	return word;
}
string* search_replace(string*in, string key,string replacement, int wordcount){
	for(int i=0; i <wordcount;i++){
		if(in[i]==key){
			in[i]=replacement;
		}
		}
	return in;
}
