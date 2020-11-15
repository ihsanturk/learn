#include <math.h>

double map(double x, double i_min, double i_max, double o_min, double o_max) {
	return (x - i_min) * (o_max - o_min) / (i_max -  i_min) + o_min;
}

char sinus_text[3] = "sin";

void draw_one_line() {

}

void draw_sin() {
	double i = M_PI / 2;
	int dot_count = 0;
	int j = 0; // TODO: naming convention
	int k = 0; // TODO: naming convention

	struct winsize w;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
	dot_count = map(sin(i), -1, 1, 0, w.ws_col);

	draw_one_line();
}

int main() {
	while(1) {
		draw_sin();
	}
}
