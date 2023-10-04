#include"default.h"

#define NAME "Nadir Zamanov\n"
#define True true
#define False false

// macros
#define SQR(a) (a)*(a)
#define CUBE(a) SQR(a)*(a)
#define ADD(a, b) (a)+(b)


// #if   #elif #else #endif 
#if SQR(5) < SQR(3) 
#define COOL "STEP IT ACADEMY\n"
#elif SQR(3) > CUBE(3)
#define FOO "HARWARD\n"
#else
#define WOW "STEP IT\n"
#endif

// #ifdef #elif #else #endif 

#ifdef WOW
#define COOL "STEP IT ACADEMY\n"
#else 
#define WOW "STEP IT\n"
#endif

//#define A 5

// #ifndef
#ifndef A
#define A 5
#endif // !A

#ifndef PI
#define PI 3.14159
#endif // !PI

// #,   ##
#define makeStr(a)  #a 

#define concatenation(a, b)  a##b
using namespace std;

void foo() {
	print("Hello world");
}



int main() {

	/*celoe_cislo numb = 5;
	print(numb);

	forever
		begin
		if (numb == 15)
			begin
				break;
			end
			print("Hello world!\n");
			numb++;
		end

	if (numb > 3)
		begin
			print("forever");
		end
	call;*/

	/*print(add(5, 3));*/

//	print(NAME);
//#undef NAME
//#define NAME "Seviyye " \
//			 "Urovnev\n"
//	print(NAME);
//	cout << "Salam" << endl;

	/*cout << SQR(25) << endl;
	cout << CUBE(3) << endl;
	cout << ADD(SQR(5), CUBE(7)) << endl;*/
	cout << WOW << endl;

#ifdef A
	int myVAlue = 4;
	cout << myVAlue << endl;
#else
	cout << "Salam" << endl;
	/*#error "myValue is not ala bula boz kechi"*/
#endif
	/*cout << makeStr(myVAlue) << endl;*/

	cout << concatenation(my, VAlue) << endl;

}