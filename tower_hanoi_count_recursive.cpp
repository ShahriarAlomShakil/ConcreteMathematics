#include <iostream>
using namespace std;

int towerOfHanoiCount(int n)
{
    if (n == 1)
        return 1;
    return 2 * towerOfHanoiCount(n - 1) + 1;
}

int main()
{
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    int totalMoves = towerOfHanoiCount(n);
    cout << "Total number of moves required: " << totalMoves << endl;
    return 0;
}
