#include <stdlib.h>//malloc
#include <string.h>

int main(void)
{
	int maxlen, len, i;
	char *str;
	printf("maxlen:");
	scanf("%d", &maxlen);
	getchar();
	str = (char*)malloc(sizeof(char)*(maxlen + 1));

	printf("put str:");
	fgets(str, maxlen + 1, stdin);
	str[strlen(str) - 1] = 0;
	len = strlen(str);

	for (i = len; i > 0; i--)
	{
		if (str[i] == ' ')
		{
			printf("%s", &str[i + 1]);
			str[i] = 0;
		}
	}
	printf("%s", &str[0]);
	free(str);
	return 0;

}