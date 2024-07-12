#include <stdio.h>

int main() {
    char fname[30], lname[30];
    int id;
    int date, month, year;
    float gpa;
    scanf("%s\n%s\n%d\n%d/%d/%d\n%f", fname, lname, &id, &date, &month, &year, &gpa);
    printf("Fullname: %s %s\n", fname, lname);
    printf("ID: %d\n", id);
    printf("DOB: %02d-%02d-%04d\n", date, month, year);
    printf("GPA: %.2f", gpa);
    return 0;
}