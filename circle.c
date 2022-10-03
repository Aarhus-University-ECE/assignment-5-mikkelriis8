#include <stdlib.h>
#include "circle.h"


void fiveCircles(circle c[]) {
	//circle c[5]; /* array with number of circles */
    point s;
    int i; /* counter variable */
    int q; /* placeholder */
    int isValid; /* to check precondition */

    for (i = 0; i < 5; i++) {
        printf("Insert radius, x coordinate and y cordinate to the center of circle %d:\n", q = i + 1);
        scanf("%d%d%d", &c[i].r, &c[i].p.x, &c[i].p.y);
    }
}

int circleIsValid(const circle * c) {
	int i; /* counter variable */
    int q; /* placeholder */

    for (i = 0; i < 5; i++) {
        if (c[i].r>0) {
            q = 1;
        }
        else {
            q = 0;
            return q;
        }
    }
    return q;
}

void translate(circle* c, const point* p) {
	int i; /* counter variable */
    int q; /* placeholder */
    int a, b; /* new input coordinates (a,b) */

    for (i = 0; i < 5; i++) {
        printf("Insert new coordinates for circle number %d:\n", q = i + 1);
        scanf("%d%d", &a, &b);
        a += c[i].p.x;
        b += c[i].p.y;
        printf("When adding to the geometric point (%d,%d) we get the following coordinates:\n(%d,%d)\n", c[i].p.x, c[i].p.y, a, b);
    }
}



