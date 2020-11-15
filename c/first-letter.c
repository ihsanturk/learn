#include <stdio.h>
#include <string.h>

int main(void) {
	char line[2];

	while (fgets(line, sizeof(line), stdin) != NULL) {
		printf("%c", line[0]);
	}

}
