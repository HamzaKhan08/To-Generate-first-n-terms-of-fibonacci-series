// Q2. Write a  program to generate the first n terms of the Fibonacci series. //

#include <iostream>
using namespace std;

int fibonacci(int number)
{
    if (number <= 1)
        return number;
    return fibonacci(number - 1) + fibonacci(number - 2);
}
int main()
{
    int n = 10, i;
    for (i = 0; i < n; i++)
        cout << fibonacci(i) << " ";
    return 0;
}
