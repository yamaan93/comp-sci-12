
// Reading into an array of chars using fscanf()

#include <stdio.h>
#include <iostream>
using namespace std;
#define FILENAME "C:\\Users\\Yamaan\\Documents\\essay_output.txt"
int main() {

   FILE *fPtr;
   FILE *fPtr1;
   // fopen() returns NULL on failure
   if ((fPtr = fopen("C:\\Users\\Yamaan\\Documents\\test.txt", "r+")) == NULL) {
      printf("Error opening file\n");
      return 0;
   }
   if ((fPtr1 = fopen(FILENAME, "w")) == NULL) {
	   printf("Error opening file\n");
	        return 1;
   }
   char a[300][30];

   // fscanf() returns the number of items successfully read
   // The field widths in the format specifier need to be one less
   // than the size of the arrays, in order to leave space for the
   // null terminator.
 /*  if (fscanf(fPtr, "%9s %9s", a[0],a[1]) != 2) {
      printf("Error reading file\n");
      return 0;
   }

   */
   int ticks=0;
   for(int i=0;!feof(fPtr); i++) {

       // fscanf() returns the number of items successfully read
       if ((fscanf(fPtr, "%9s", a[i]) != 1) && (!feof(fPtr))) {
          printf("Error reading file\n");
          return 0;
       }

       ticks++;
      cout<<a[i]<<endl;
    }


   // fclose() returns 0 on successful completion
   if (fclose(fPtr) != 0) {
      printf("Error closing file\n");
      return 0;
   }

}
