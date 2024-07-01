#include "palindrome.h"
#include <stdio.h>

int is_palindrome(unsigned long n){
	unsigned long reversed = 0;

	if ( n <= 10){
		return 1
	}
	while (n != 0)
	{
		reversed = reversed * 10 + n % 10;
		n = n / 10;
	}

	if (reversed == n)
	{
		return 1;
	}

	return 0;
}
