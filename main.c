#include <stdio.h>
#include <stdlib.h>
#include "circle.h"
#include "jollyjumper.h"
#include "circle.c"
#include "jollyJumper.c"


void printCircle(circle c) {
	printf("p.x: %d, p.y: %d, r: %d\n", c.p.x, c.p.y, c.r);
}

int main(void) {
	/*testing circles - make sure that you know how it works and what it is supposed to print out*/
	circle c[5];
	fiveCircles(c);
	for (int i = 0; i < 5; i++) {
		printCircle(c[i]);
	}
	point p;
	p.x = 2;
	p.y = 2;
	translate(&c[1], &p);
	printCircle(c[1]);
	printf("isValid: %d", circleIsValid(&c[1]));

	int i; /* counter variable */
    int n;
    int seq[n];
    int jolly;

    printf("How long do you want the sequence to be?\n");
    scanf("%d", &n);

    printf("Insert sequence that's %d numbers long:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &seq[i]);
    }

    jolly = isJollyJumper(seq, n - 1);

    if (jolly == 0) {
        printf("Not jolly");
    }
    else if (jolly == 1) {
        printf("Jolly");
    }

	int *numbers = malloc(sizeof(int) * n); /*the numbers read*/

	/*readin the n numbers in the array numbers*/

	if (isJollyJumper(numbers, n)) {
		printf("it is a Jolly Jumper");}
	else {
		printf("not a Jolly Jumper");}
	return 0;

}
