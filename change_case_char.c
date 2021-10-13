/*
Sample Input:
t
Sample Output:
T
*/

#include <stdio.h>
int main() {
	char c;
	scanf("%c", &c);
	
	// Upper to lower case
	if('A' <= c && c <= 'Z')
	{
	    printf("%c",c+32);
	}
	
	// Lower to upper case
	if('a' <= c && c <= 'z')
	{
	    printf("%c",c-32);
	}
	
	return 0;
}