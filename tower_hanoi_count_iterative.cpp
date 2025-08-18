#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    int totalMoves = pow(2, n) - 1;

    cout << "Total number of moves required: " << totalMoves << endl;
    return 0;
}
