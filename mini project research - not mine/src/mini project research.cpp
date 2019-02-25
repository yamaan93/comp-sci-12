//============================================================================
// Name        : mini.cpp
// Author      : Yamaan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main()
{
  const int array_2_size = 2;
  const int dynamic_array_size = 3;
  const int pointer_array_size = 2;
  const int ptrparameter_size = 3;
  void pointer_parameter(const string *p);
  string pointer_array();

    // Using the sentinel value "x" to determine the end of the array.
 string sentintel[] = {"Software engineers are responsible for designing, analyzing and optimizing software and software architecture.\n",
 "Software engineers incorporate both programming and engineering design philosophy to create reliable programs and systems on a large scale.\n", "x"};

 //Array declared on the stack using the #define pre-processor directive to create maintainable code (fixed size)
 string on_stack[array_2_size] = {"At the University of Waterloo, the Software Engineering program has an admission average in the mid-90s.",
 "It requires high school Physics, Chemistry, Calculus and Advanced Functions.\n"};

 //This array is dynamically allocated. See below for when the memory is freed (the strings it prints only need to be printed once).
 string *dynamic_allocation = new string[dynamic_array_size];
 dynamic_allocation[0] = "The program takes an average of 4⅔ years to complete, including the co-op program. ";
 dynamic_allocation[1] = "The tuition at UWaterloo is $18,250 per year, with an estimated $2,150 in books.\n";
 dynamic_allocation[2] = "During co-op, students usually earn about $17,000 per term to offset costs. ";

 //This array simply exists to demonstrate knowledge of using pointers to reference arrays.
 string for_pointers[pointer_array_size] = {"The average salary for Canadian software engineers is $71,397 per year.\n", "The day-to-day life of a software engineer involves coordinating with design and development teams to ensure logical, safe implementation of ideas into projects.\n"};
 string *strPtr;
 strPtr = for_pointers;

 string ptr_parameter[ptrparameter_size] = {"High-profile companies like Microsoft and Google regularly hire software engineers for this purpose, as their teams and projects are very large and all require management.\n","Overall, software engineers have a difficult but rewarding career.",
 "It is a very difficult career to enter, as education is incredibly competitive and the job market is saturated,\nbut those who do make it enjoy higher-range salaries and control over their work.\n\n"};

 //I made this constant so that I wouldn't get my pointers mixed up.
 const string *strPtr2 = ptr_parameter;

 for (int i = 0; sentintel[i] != "x"; i++) {
     cout << sentintel[i];
 }

 for (int i = 0; i < array_2_size; i++) {
     cout << on_stack[i];
 }

 for (int i = 0; i < dynamic_array_size; i++) {
     cout << dynamic_allocation[i];
 }


 for (int i = 0; i < pointer_array_size; i++) {
     cout << *strPtr;
     strPtr++;
 }

 delete []dynamic_allocation; //Freeing memory

 pointer_parameter(strPtr2);


 if (bioarray1 == NULL) {
     cout << "Error with output.";
 } else {
     for (int i = 0; bioarray1[i] != "x"; i++) {
         cout << bioarray1[i];
     }
 }


}

//This function just gets passed a pointer and uses some arithmetic to print out the elements of an array
void pointer_parameter(const string *ptr) {
    for (int i = 0; i < 3; i++) {
        cout << *ptr;
        *ptr++;
    }
}

string *pointer_array() {

   string *returnarray = new string[5];

   returnarray[0] = "Bioinformatics incorporates computer science and biology to track and manage biological data.\n";
   returnarray[1] = "Bioinformaticians create algorithms and simulations to better visualize and track complex data and concepts.\n";
   returnarray[2] = "Typically, a Ph.D is necessary to become a bioinformatician, as there is a very high level of sophistication involved with both\n";
   returnarray[3] = "the computer science and the biology parts of the field.\n";
   returnarray[4] = "x";


   return returnarray;

}

