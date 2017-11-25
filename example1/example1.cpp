// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <mysqrt.h>

#ifdef CPP_PRINT
#include <iostream>
using namespace std;
#endif
int main (int argc, char *argv[])
{
		if (argc < 2)
		{
				fprintf(stdout,"Usage: %s number\n",argv[0]);
				return 1;
		}
#ifdef CPP_PRINT
	cout << "CPP style print is defined" << endl;
#endif
#ifdef MY_PRINT
	cout << "MY  style print is defined" << endl;
#endif
		double inputValue = atof(argv[1]);
		double outputValue = mysqrt(inputValue);
		fprintf(stdout,"The square root of %g is %g\n",
						inputValue, outputValue);
		return 0;
}
