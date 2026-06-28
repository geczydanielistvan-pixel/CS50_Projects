#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <cs50.h>

string get_string(const char *prompt, ...)
{
	if (prompt != NULL)
	{
		printf("%s", prompt);
	}
	
	size_t capacity = 16;
	size_t length = 0;
	
	char *buffer = malloc(capacity * sizeof(char));
	if (buffer == NULL)
	{
		return NULL;
	}
	
	int ch;
	while ((ch = fgetc(stdin)) != EOF && ch != '\n')
	{
		if (length + 1 >= capacity)
		{
			capacity *= 2;
			char *new_buffer = realloc(buffer, capacity * sizeof(char));
			if (new_buffer == NULL)
			{
				free(buffer);
				return NULL;
			}
			buffer = new_buffer;
		}
		buffer[length++] = ch;
	}
	
	buffer[length] = '\0';
	return buffer;
}
