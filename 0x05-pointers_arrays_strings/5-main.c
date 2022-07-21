#include "main.h"
#include <stdio.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    char s[10] = "My School";
	    char v[] = "1234567890abcdefghijklmnopqrstuvwxyz";

	        printf("%s\n", s);
		    rev_string(s);
		        printf("%s\n", s);
			
	        printf("%s\n", v);
		    rev_string(v);
	        printf("%s\n", v);
			    return (0);
}
