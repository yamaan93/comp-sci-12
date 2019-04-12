//============================================================================
// Name        : validationquiz.cpp
// Author      : Yamaan
// Version     :
// Copyright   : Your copyright notice
// Description : License plate code
//============================================================================

#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
using namespace std;

int main() {
	int run = 1;
	char buffer[100];
	cout << "please enter your license plate, dont mess up!!" << endl;
	while(run==1){
	int letters_matched =0;
	int numbers_matched =0;
	printf("Enter a four letter combo: ");
	      fflush(stdout);
	      fgets(buffer, 100, stdin);
	      for (int i = 0; buffer[i] != 0; i++){
	         if (buffer[i] == '\n')
	            buffer[i] = '\0';
	      }

	      for(int i = 0; i<4;i++){
	    	  if(isalpha(buffer[i])){
					letters_matched++;

			  }
		  }
	      if(letters_matched != 4){
	    	  cout<<"jeez how hard is it to enter 4 letters? try again"<<endl;
	    	  continue;
	      }
	      if (strlen(buffer) != 7) {
	      	         printf("Error: you did not enter a valid license plate format\n");
	      	         continue;
	      	      }
	      for(int i =4;i<7; i++){
	    	  if(isdigit(buffer[i])){
	    		  numbers_matched++;
	    	  }
	      }
	      if(numbers_matched ==3){
	    	  for(int i =0; i<4;i++){
	    		buffer[i]=  toupper(buffer[i]);
	    	  }
	    	  cout<<"congrats your capable of entering a license plate"<<endl;
	    	  cout<<"your license plate is: ";
	    	  cout<<buffer<<endl;
	    	  run=0;
	      }
	      else{
	    	  cout<<"you messed up, wrong number of numbers, try again!"<<endl;
	    	  continue;
	      }
	}
	return 0;
}
