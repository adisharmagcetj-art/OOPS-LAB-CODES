abstract class Employee {
    String name;
    int employeeId;

    Employee(String n, int i) {
        name = n;
        employeeId = i;
    }

    abstract double calculateSalary();

    void displayDetails() {
        System.out.println("Name: " + name + "\nEmployee ID: " + employeeId);
        System.out.printf("Salary: %.2f%n", calculateSalary());
    }
}

class PermanentEmployee extends Employee {
    double basic, hra, da;

    PermanentEmployee(String n, int i, double b, double h, double d) {
        super(n, i);
        basic = b;
        hra = h;
        da = d;
    }

    double calculateSalary() {
        return basic + hra + da;
    }
}

class ContractEmployee extends Employee {
    int hours;
    double rate;

    ContractEmployee(String n, int i, int h, double r) {
        super(n, i);
        hours = h;
        rate = r;
    }

    double calculateSalary() {
        return hours * rate;
    }
}

public class Q1_Employee_Salary_Management {
    public static void main(String[] x) {
        Employee a = new PermanentEmployee("Aamir", 101, 40000, 8000, 4000);
        Employee b = new ContractEmployee("Sara", 102, 120, 500);

        a.displayDetails();
        b.displayDetails();
    }
}