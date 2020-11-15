#include <stdio.h>
#include <string.h>

int main(void) {
	char line[1000];

	while (fgets(line, sizeof(line), stdin) != NULL) {
		printf("%s", line);
	}

}
