#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> factorial(10);
    factorial[0] = 1;
    for (int i = 1; i < 10; i++)
        factorial[i] = factorial[i - 1] * i;
    factorial[0] = 0;
    int test;
    cin >> test;
    while (test--)
    {
        int num, sumOfFacts = 0, copy;
        cin >> num;
        copy = num;
        while (copy)
        {
            sumOfFacts = sumOfFacts + factorial[copy % 10];
            copy /= 10;
        }
        if (sumOfFacts == num)
            cout << "Special Number\n";
        else
            cout << "Not a Special Number\n";
    }
    return 0;
}