#include <stdio.h>


int main() {
int marks;
printf("Enter student marks: ");
scanf("%d", &marks);


if (marks > 90) printf("Grade: A\n");
else if (marks > 70) printf("Grade: B\n");
else if (marks >= 40) printf("Grade: C\n");
else printf("Grade: F\n");


return 0;
}