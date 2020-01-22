# include <stdio.h>

int main(void)
{
	int i;
	char words[30];
	scanf("%s", &words);
	for(i = 0; words[i] != '\0'; i++)
        {
    	printf("\'%c'\n", words[i]);
	}
	return 0;
}
