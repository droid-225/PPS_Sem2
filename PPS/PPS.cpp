#include <iostream>
#include <string>
// Only have one user-defined library uncommented at once
//#include "student.h"
//#include "reference.h"
//#include "enumex.h"
//#include "largest.h"
//#include "daatm.h"
//#include "overload.h"
//#include "distRead.h"
#include "swap.h"
using namespace std;

int main() {
	swapper swap;
	int x = 2;
	int y = 3;
	swap.aSwap(&x, &y);

	return 0;
}