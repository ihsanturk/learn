#include <sys/ioctl.h>
#include <unistd.h>
#include <stdio.h>
#include <math.h>

/* double rad2deg(double arg) { return M_PI * arg / 180; } */

double
map(double x, double in_min, double in_max, double out_min, double out_max) {
	return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

int
main()
{
	char sinus[3] = "sin";
	double i = M_PI / 2;
	struct winsize w;
	int dot_count = 0;
	int j = 0;
	int k = 0;

	/* begin graph */
	while (2) {
		ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
		dot_count = map(sin(i), -1, 1, 0, w.ws_col);

		/* begin draw one line */
		for (j = 0; j < w.ws_col; j++) {
			if (j == w.ws_col / 2)
				printf("|");
			else if (j == dot_count) {
				printf("%c", sinus[k]);
			}
			else
				printf(" ");
		}
		printf("\n");
		/* end draw one line */

		if (k < 2) k++;
		else k = 0;
		i += 0.05;
		usleep(10000);
	}
	/* end graph */

	return 0;
}
