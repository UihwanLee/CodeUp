# include <stdio.h>

int main(void)
{
	char sentence[2001];
	fgets(sentence, 2000, stdin);
	printf("%s", sentence);
	return 0;
}
