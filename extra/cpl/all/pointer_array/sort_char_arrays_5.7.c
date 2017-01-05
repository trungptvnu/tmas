#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* MAXCHARS bytes are allocated for lines.  As readlines() do not have to call
 * alloc() anymore, but just have to increment a pointer instead, it is faster.
 */

#define MAXLINES	5000
#define MAXCHARS	100000
#define RED     "\x1b[31m"
#define RESET   "\x1b[0m"

char	*lineptr[MAXLINES];
char	linebuf[MAXCHARS];

int	readlines (char *lineptr[], int maxlines, char linebuf[]); 
void	writelines (char *lineptr[], int nlines);
void	_qsort (char *v[], int left, int right);

int main ()
{
	int	nlines;

	if ((nlines = readlines(lineptr, MAXLINES, linebuf)) >= 0) {
		_qsort(lineptr, 0, nlines - 1);
		writelines(lineptr, nlines);
		return 0;
	} else {
		printf("Error: Input too big to sort!\n");
		return 1;
	}
}

#define MAXLEN	1000

int _getline (char line[], int limit);
int readlines (char *lineptr[], int maxlines, char linebuf[])
{
	int	len, nlines;
	char	*p, line[MAXLEN];

	nlines = 0;
	p = linebuf;
	while ((len = _getline(line, MAXLEN)) > 0) 
		//if (nlines >= maxlines || p + len > linebuf + MAXCHARS) /*if don't use malloc, we need increase p pointer as p += len */
		if (nlines >= maxlines || (p = malloc(len))== NULL) 
			return -1;
		else 
		{
			/* Delete newline, correct if no line reaches MAXLEN
			 * length, otherwise last character is lost. 
 			 */
			line[len - 1] = '\0';
			
			strcpy(p, line);
			lineptr[nlines++] = p;
			//p += len; 
		}
		
	return nlines;
}

void writelines (char *lineptr[], int nlines)
{
	int	i;
    printf(RED "\nAfter sorting \n" RESET);
	for (i = 0; i < nlines; i++)
		printf("%s\n", lineptr[i]);
}

int _getline (char line[], int limit)
{
        int     i, c;

        for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++)
			line[i] = c;
		
        if (c == '\n') {
            line[i] = c;
            i++;
        }
        line[i] = '\0';

        return i;
}

void	swap (char *v[], int i, int j);

void _qsort (char *v[], int left, int right)
{
	int	i, last;

	if (left >= right)
		return;

	swap(v, left, (left + right) / 2);
	last = left;
	for (i = left + 1; i <= right; i++)
		if (strcmp(v[i], v[left]) < 0)
			swap(v, ++last, i);

	swap(v, left, last);

	_qsort(v, left, last - 1);
	_qsort(v, last + 1, right);
}

void swap (char *v[], int i, int j)
{
	char	*temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
