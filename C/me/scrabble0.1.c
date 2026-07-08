#include<cs50.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>

int value[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int sum_value(string word)
{
	int score = 0;
	for (int i = 0, n = strlen(word); i < n; i++)
	{ 
		if (isupper(word[i]))
		{
			score += value[word[i] - 'A'];
		}
		else if (islower(word[i]))
		{
			score += value[word[i] - 'a'];
		}
	}
	return score;
}

int main(void)
{
	string word1 = get_string("Player 1: ");
	string word2 = get_string("Player 2: ");
	int score1 = sum_value(word1);
	int score2 = sum_value(word2);

	if (score1 > score2)
	{
		printf("Player 1 wins!\n");
	}
	else if (score1 < score2)
	{
		printf("Player 2 wins!\n");
	}
	else
	{
		printf("Tie!\n");
	}
	return 0;
}
