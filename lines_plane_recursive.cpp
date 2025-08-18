#include <iostream>
using namespace std;

long long linesInPlane(int n)
{
    if (n == 0)
        return 1;
    return linesInPlane(n - 1) + n;
}

int main()
{
    int n;
    cout << "Enter number of lines: ";
    cin >> n;
    cout << "Maximum regions: " << linesInPlane(n) << endl;
    return 0;
}
