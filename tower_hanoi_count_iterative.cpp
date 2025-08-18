#include <iostream>
using namespace std;

int towerOfHanoiCountIterative(int n)
{
    int totalMoves = 0;
    for (int i = 0; i < n; i++)
    {
        totalMoves = totalMoves * 2 + 1;
    }
    return totalMoves;
}

int main()
{
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    int totalMoves = towerOfHanoiCountIterative(n);
    cout << "Total number of moves required: " << totalMoves << endl;
    return 0;
}
