#include <iostream>
using namespace std;

long long linesInPlaneIterative(int n)
{
    if (n <= 1)
        return 1;

    long long regions = 1;
    for (int i = 2; i <= n; i++)
    {
        regions += i;
    }
    return regions;
}

int main()
{
    int n;
    cout << "Enter number of lines: ";
    cin >> n;
    cout << "Maximum regions: " << linesInPlaneIterative(n) << endl;
    return 0;
}
