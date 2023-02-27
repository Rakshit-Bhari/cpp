#include <iostream>
using namespace std;

// Define a structure to hold two numbers
struct Numbers
{
    double num1;
    double num2;
};

// Function to add two numbers
double add(Numbers nums)
{
    return nums.num1 + nums.num2;
}

// Function to subtract two numbers
double subtract(Numbers nums)
{
    return nums.num1 - nums.num2;
}

// Function to multiply two numbers
double multiply(Numbers nums)
{
    return nums.num1 * nums.num2;
}

// Function to divide two numbers
double divide(Numbers nums)
{
    if (nums.num2 == 0)
    {
        cout << "Error: Cannot divide by zero." << endl;
        return 0;
    }
    else
    {
        return nums.num1 / nums.num2;
    }
}

int main()
{
    // Declare a Numbers structure
    Numbers nums;

    // Get input from the user
    cout << "Enter two numbers: ";
    cin >> nums.num1 >> nums.num2;

    // Perform arithmetic operations
    cout << "Sum: " << add(nums) << endl;
    cout << "Difference: " << subtract(nums) << endl;
    cout << "Product: " << multiply(nums) << endl;
    cout << "Quotient: " << divide(nums) << endl;

    return 0;
}
