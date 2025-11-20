#include <stdio.h>

struct Shape {
    void (*draw)(void);
};

void drawCircle() {
    printf("Drawing a Circle\n");
}

int main() {
    struct Shape circle;
    circle.draw = drawCircle;
    circle.draw(); // abstraction in action
    return 0;
}