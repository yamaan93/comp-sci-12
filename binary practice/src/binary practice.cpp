//============================================================================
// Name        : binary.cpp
// Author      : Yamaan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>

using namespace std;
#define FILENAME "C:\\Users\\Yamaan\\Documents\\average.txt"
#define FILENAME2 "C:\\Users\\Yamaan\\Documents\\averageOUT.txt"
int main() {
	int input = 0;
	int average =0;
	int size = 0;
	FILE *fptr;
	FILE *fptr2;
	  if ((fptr = fopen(FILENAME, "r")) == NULL) {
	      printf("Error opening file\n");
	      return 0;
	   }
	  if ((fptr2 = fopen(FILENAME2, "a")) == NULL) {

	        printf("Error opening file\n");
	        return 1;

	  }
	  if (fprintf(fptr2, "the average is (") < 0) {

	 	 			 	        printf("Error writing file\n" );
	 	 			 	        return 1;
	 	 	 }
	 while(fscanf(fptr, "%d", &input) != EOF){
			 if (fprintf(fptr2, "%d+ ",input) < 0) {

		 	        printf("Error writing file\n" );
		 	        return 1;

		 	     }
	  size++;
	  cout<<input<<endl;
	  average = average +input;
	  }
	 average = average/size;
	 if (fprintf(fptr2, "/ %d",size) < 0) {

			 	        printf("Error writing file\n" );
			 	        return 1;
	 }
	 if (fprintf(fptr2, "= %d )",average) < 0) {

	 			 	        printf("Error writing file\n" );
	 			 	        return 1;
	 	 }
	   if (fclose(fptr) != 0) {
	   /* fclose() returns non-zero on failure, 0 on success */

	      printf("Error closing file 1\n");
	      return 1;

	   }
	   if (fclose(fptr2) != 0) {
		   /* fclose() returns non-zero on failure, 0 on success */

		      printf("Error closing file 2\n");
		      return 1;

		   }

}
