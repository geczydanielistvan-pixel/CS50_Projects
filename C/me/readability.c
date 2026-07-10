#include<cs50.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<stdio.h>

int main(void)
{
	string t = get_string("Text: ");
	int l = 0;
	int w = 1;
	int s = 0;
	
	for(int i = 0; i < (int)strlen(t); i++)
	{
		if(isalpha(t[i]))
		{
			l++;
		}
		else if(t [i] == ' ')
		{
			w++;
		}
		else if(t[i] == '.' || t[i] == '?' || t[i] == '!')
		{
			s++;
		}
	}
	
	float L = (float) l / (float) w * 100;
	float S = (float) s / (float) w * 100;
	int g = round(0.0588 * L - 0.296 * S - 15.8);	
	
	if(g < 1)
	{
		printf("Before Grade 1\n");
	}
	else if(g > 16)
	{
		printf("Grade 16+\n"); 
	}
	else
	{
		printf("Grade %i\n", g);
	}
	
	return 0;
}
