#include <string.h>

void leString(char *str) {
	char ch = ' ';
	int i = 0;
	while(ch != '\n') {
		ch = getchar();
		if(ch == '\n')
			str[i] = '\0';
		else 
			str[i++] = ch;
	}
}

