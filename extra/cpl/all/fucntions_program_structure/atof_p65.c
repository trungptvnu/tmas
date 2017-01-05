#include <ctype.h>
#include <stdio.h>
#define MAXLINE 100

/* atof: convert string s to double */
double atof(char s[])
{
	double val, power;
	int i, sign;
	
	for (i = 0; isspace(s[i]); i++) /* skip white space */
		;
		
	sign = (s[i] == '-') ? -1 : 1;
	
	if (s[i] == '+' || s[i] == '-')
		i++;
	
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	
	if (s[i] == '.')
		i++;

	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10;
	}
	
	return sign * val / power;
}

/* atoi: convert string s to integer using atof */
int atoi(char s[])
{
	double atof(char s[]);
	return (int) atof(s);
}

/* rudimentary calculator */
main()
{
	double sum, atof(char []);
	char line[MAXLINE];
	int getline(char line[], int max);

	sum = 0;
	while (getline(line, MAXLINE) > 0)
	printf("\t%g\n", sum += atof(line));
	return 0;
}