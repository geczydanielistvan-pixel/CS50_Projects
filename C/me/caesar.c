#include<cs50.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, string argv[])
{
	if(argc != 2)
	{
		printf("Usage: ./caesar key\n");
		return 1;
	}
	
	for(size_t i = 0; i < strlen(argv[1]); i++)
	{
		if(!isdigit(argv[1][i]))
		{
			printf("Usage: ./caesar key\n");
			return 1;
		}
	}
		
		int k = atoi(argv[1]);
		string pt = get_string("Plaintext: ");
		printf("Ciphertext: ");
		
		for(size_t j = 0; j < strlen(pt); j++)
		{
			if(isupper(pt[j]))
			{
				printf("%c", (pt[j] - 65 + k) % 26 + 65);
			}
			else if(islower(pt[j]))
			{
				printf("%c", (pt[j] - 97 + k) % 26 + 97);
			}
			else
			{
				printf("%c", pt[j]);
			}
		}
		printf("\n");
		return 0;
}
