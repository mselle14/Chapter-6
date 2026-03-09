//Marshon Sellers

#include <iostream>
using namespace std;

struct Temperature_Record
{
    float celsius;
};

void convert_to_fahrenheit(Temperature_Record& temp_ref)
{
    temp_ref.celsius = (temp_ref.celsius * (9.0 / 5.0)) + 32;
    cout << "Inside function (reference): " << temp_ref.celsius << endl;
}

int main()
{
    Temperature_Record temp_main;

    cin >> temp_main.celsius;

    cout << "Before call (main): " << temp_main.celsius << endl;

    convert_to_fahrenheit(temp_main);

    cout << "After call (main): " << temp_main.celsius << endl;

    return 0;
}