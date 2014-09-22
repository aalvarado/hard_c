#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i = 0;

	printf("argc: %d\n", argc - 1);

	for (i = 1; i < argc; ++i)
	{
		printf("arg %d: %s\n", i, argv[i]);
	}

	char *states[] = {
		"california",
		"oregon",
		"Washington",
		"Texas"
	};

	int num_states = 4;

	for (i = 0; i < num_states; ++i)
	{
		printf("state %d %s\n", i, states[i]);
	}

	return 0;
}
