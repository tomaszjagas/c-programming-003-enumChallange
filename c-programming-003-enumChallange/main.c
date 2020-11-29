/*********************************
* Description: some play with enum
**********************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	enum company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };

	enum company company1 = XEROX;
	enum company company2 = GOOGLE;
	enum company company3 = EBAY;

	printf("%d\n", company1);
	printf("%d\n", company2);
	printf("%d\n", company3);

	return 0;
}