#include<cs50.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>

int main(int argc, string argv[])
{
	if(argc != 2)
	{
		printf("Usage: ./substitution key\n");
		return 1;
	}
	
	if(strlen(argv[1]) != 26)
	{
		printf("Key must contain 26 characters.\n");
		return 1;
	}
	
	for(int i = 0, n = strlen(argv[1]); i < n; i++)
	{
		if(isalpha(argv[1][i]) == 0)
		{
			printf("Key should be all alphabets.\n");
			return 1;
		}
		
		for(int j = i + 1; j < n; j++)
		{
			if(tolower(argv[1][i]) == tolower(argv[1][j]))
			{
				printf("No duplicate values allowed.\n");
				return 1;
			}
		}
	}
	
	string k = argv[1];
	string pt = get_string("Plaintext: ");
	printf("Ciphertext: ");
	
	for(int i = 0, n = strlen(pt); i < n; i++)
	{
		if(isalpha(pt[i]))
		{
			if(isupper(pt[i]))
			{
				printf("%c", toupper(k[pt[i] - 65]));
			}
			else
			{
				printf("%c", toupper(k[pt[i] - 97]));
			}
		}
		else
		{
			printf("%c", pt[i]);
		}
	}
	printf("\n");
	return 0;
}
