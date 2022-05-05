#include<iostream>
using namespace std;

void fibonacci(int n)
{
    long long a = 0, b = 1;

    for (int i = 0; i < n; i++)
    {
        cout << b << " ";
        b += a; 
        a = b - a; 
    }
}

int main()
{
    int n;

    cout << "podaj ile chcesz wypisać wyrazów ciągu fibonacciego: ";
    cin >> n;

    fibonacci(n);

    return 0;
}
