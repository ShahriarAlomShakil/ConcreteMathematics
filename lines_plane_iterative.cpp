#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of lines: ";
    cin >> n;

    long long regions = 1 + (long long)n * (n + 1) / 2;

    cout << "Maximum regions: " << regions << endl;
    return 0;
}
