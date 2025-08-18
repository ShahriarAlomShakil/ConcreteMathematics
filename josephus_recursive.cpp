#include <iostream>
using namespace std;

int josephus(int n, int k)
{
    if (n == 1)
        return 1;
    else
        return (josephus(n - 1, k) + k - 1) % n + 1;
}

int main()
{
    int n;
    int k = 2;
    cout << "Enter number of people: ";
    cin >> n;
    cout << "Survivor position: " << josephus(n, k) << endl;
    return 0;
}
