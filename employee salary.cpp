//Marshon Sellers

#include <iostream>
using namespace std;

struct Employee_Record 
{
    int employee_id;
    int salary;
};

void increase_salary(Employee_Record employee_copy, int bonus_amount) {
    employee_copy.salary = employee_copy.salary + bonus_amount;
    cout << "Inside function (copy): " << employee_copy.salary << endl;
}

int main() {
    Employee_Record employee_main;
    int bonus_amount;

    cin >> employee_main.employee_id;
    cin >> employee_main.salary;
    cin >> bonus_amount;

    cout << "Before function call (main): " << employee_main.salary << endl;

    increase_salary(employee_main, bonus_amount);

    cout << "After function call (main): " << employee_main.salary << endl;

    return 0;
}