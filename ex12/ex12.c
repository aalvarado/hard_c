#include <stdio.h>

int main(int argc, char const *argv[]) {
	int i = 0;
	if (argc == 1) {
		printf("You only have one argument. You need to review it\n");

	} else if (argc > 1 && argc < 4) {
		printf("argc %d\n", argc);
		printf("here's your arguments:\n");

		for (i = 0; i < argc; ++i) {
			printf("%s ", argv[i]);
		}

		printf("\n");
	} else {
		printf("You have too many arguments\n");
	}
	return 0;
}
