#include<stdio.h>
struct Employee {
char name[25],department[20],email[50];
int id;
float salary;

}Employee;
int main () {
    strcpy(Employee.name,"John Doe");
    strcpy(Employee.department,"Human Resourses");
    strcpy(Employee.email,"jonh.doe@company.com");
    Employee.id=12345;
    Employee.salary=55000.50;

    printf("name: %s\n",Employee.name);
    printf("department: %s\n",Employee.department);
    printf("email: %s\n",Employee.email);
    printf("id: %d\n",Employee.id);
    printf("salary: %.2f\n",Employee.salary);

return 0;
}