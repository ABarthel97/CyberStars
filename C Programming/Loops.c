#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

	//Loops: two types that we'll cover - for and while

	//Basic for loop
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("%d\n", i);
	}

	//Basic while loop
	i = 0;
	while (i < 10)
	{
		printf("%d\n", i);
		i++;
	}

}