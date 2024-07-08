#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int min_steps(int x, int y) {
    int distance = y - x;
    if (distance == 0) return 0;

    int step = 0;
    int current_position = x;
    int current_step_length = 1;

    while (current_position < y) {
        step++;
        current_position += current_step_length;

        if (current_position >= y) break;

        // «б≥льшуЇмо довжину кроку
        if (current_position + current_step_length + 1 <= y) {
            current_step_length++;
        }
        // не можемо зробити ще один б≥льший крок = тримаЇмо поточний
        else if (current_position + current_step_length <= y) {
        }
        //не можемо зробити поточний крок = зменшуЇмо його
        else {
            current_step_length--;
        }
    }

return step;
}

int main() {
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    int result = min_steps(x, y);
    printf("Minimum krokiv: %d\n", result);

    return 0;
}
