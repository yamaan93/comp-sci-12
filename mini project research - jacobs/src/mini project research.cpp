//============================================================================
// Name        : mini.cpp
// Author      : Yamaan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {


	 char research1[] = {"The field of computer science and engineering is a massive field with a virtually infinite job opportunities. From I.T technicians whose role is to insure that systems being used at their workplace remain maintained and fix any problems that their co-workers may encounter, to lead developers who plan and create programs that millions of people use and depend on.  One of the most popular post secondary fields in post secondary, mainly university, would be the software developer position. In order to become a software developer, you will require a degree in computer science, or a similar field. A computer science degree takes 3-4 years to complete, and cost about  $9,000 dollars a year, but it varies depending on the program. But having a degree is usually not enough to be hired as a software developer. Employers look for people with a lot of personal programming experience, who work on their own projects often. Thus, it is important that if you want to be hired as a software developer, you must build yourself online repositories of your personal programs in order for employers to see your experience. Once you land a job however, you can expect a starting salary of  $48,750 a year to start, but the average salary after a few years of experience is $90,000. Since developers are not normally unionized, benefits vary a lot between employers, and as such cannot be listed.  A day in the life of a software developer tends to vary depending on the position. On average, software developers report that their work place is pretty lax, and they have flexible work hours, but again, this all varies based on the employer. "};// using this as a reference for size of array
	    char* research1ptr = new char [sizeof(research1)/sizeof(research1[0])];
	    research1ptr = research1; // research1ptr is in the freestore
	    char research2[] = {"Computer vision has become a massive success in the computer and automotive world. The ability for computers and cameras to recognize objects has allowed automotive companies to do a large variety of things from basic driver assist,  to fully autonomous driving cars. Computer vision is a field that focuses on taking feedback from the real world, and transforming it into a set of data that a computer can understand. This field has exploded in popularity in the automotive world in the last decade, with the rising race to full autonomous driving. Computer vision in cars has been used for a lot more simple tasks than full autonomous driving and cars have used them for years. For example, cars within the last decade have taken advantage of computer vision to recognize street signs, and intern provide drivers with warnings such as noting an approaching stop sign or warning the driver that they are speeding above the posted limit. This is made possible by computers abilities to recognize what objects are from pictures. This is a complex process, and cannot be explained in 250 words but the basics of it are quite simple. The software developers create a program that looks for key points in a picture. But that program starts off far from perfect, and needs its values to be tuned. Then they create a second program to provide the first program with examples of signs to look for, for example stop signs. Every time the tuning values are changed, and the values keep being tested and tuned, until the developers are confident  that now their program can recognize what they want. z"};
	    char* research2ptr = new char [sizeof(research2)/sizeof(research2[0])];
	    research2ptr = research2;

	    //cout << (sizeof(research1)/sizeof(research1[0])) + (sizeof(research2)/sizeof(research2[0])) << endl;

	    char* full_research = new char[(sizeof(research1ptr)/sizeof(research1ptr[0])) + (sizeof(research2ptr)/sizeof(research2ptr[0]))];
	    full_research[0] = *research1ptr;
	    full_research[1] = *research2ptr;

	    cout << 1+full_research << endl;
	return 0;
}
