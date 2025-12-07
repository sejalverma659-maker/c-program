#include <stdio.h>

union Data {
    int id;
    float marks;
    char grade;
};

int main() {
    union Data d;

    d.id = 101;
    printf("ID: %d\n", d.id);

    d.marks = 89.5;
    printf("Marks: %.2f\n", d.marks);

    d.grade = 'A';
    printf("Grade: %c\n", d.grade);

    return 0;
}
