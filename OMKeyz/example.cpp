#include <iostream>
#include "OMKeyz.h"
using namespace std;

int main()
{
	OMKeyz* example = new OMKeyz();
	example->logger();
	delete example;
	return 0;
}