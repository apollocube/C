#include <stdio.h>

#define MAXLINE 1000		/* maximum input line size */

int max;
char line[MAXLINE];		/* current line */
char longest[MAXLINE];

int getline(void);
void copy(void);

int main()
{
	int len;
	extern int max;
	extern char longest[];
	
	max = 0;
	while ((len = getline()) > 0)
		if (len > max)		/* if has same lenth, print the first line */
		{
			max = len;
			copy();
		}
	if(max > 0)
		printf("%s",longest);
	return 0;
}

/* getline() */
int getline(void)
{
	int c, i;
	extern char line[];
	
	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n'){
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

/* copy() */
void copy(void){
	int i;
	extern char line[], longest[];
	
	i = 0;
	while ((longest[i] = line[i]) != '\0')
		++i;
}