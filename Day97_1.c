/*
Store employee data in a binary file using fwrite() and read using fread().
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.
*/
#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee e1, e2;
    FILE *fp;
    printf("Employee ID: ");
    scanf("%d", &e1.id);
    printf("Employee Name: ");
    scanf("%s", e1.name);
    printf("Employee Salary: ");
    scanf("%f", &e1.salary);
    fp = fopen("employee.dat", "wb");
    fwrite(&e1, sizeof(e1), 1, fp);
    fclose(fp);
    printf("\nEmployee details saved\n");
    fp = fopen("employee.dat", "rb");
    fread(&e2, sizeof(e2), 1, fp);
    fclose(fp);
    printf("\nReading Employee Details\n");
    printf("ID: %d\n", e2.id);
    printf("Name: %s\n", e2.name);
    printf("Salary: %.2f\n", e2.salary);
    return 0;
}