gstruct Employee {
    int Empid;
    char Name[50];
    char Dep_name[50];
    float Salary;
};

// Example usage
int main() {
    struct Employee emp1 = {1, "John Doe", "Marketing", 5000.0};
    struct Employee emp2 = {2, "Jane Smith", "Sales", 6000.0};

    // Accessing and modifying data members
    emp1.Salary = 5500.0;
    printf("Employee %d's salary: %.2f\n", emp1.Empid, emp1.Salary);

    return 0;
}
