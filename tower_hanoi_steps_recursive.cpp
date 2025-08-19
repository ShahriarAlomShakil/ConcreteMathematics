#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char destination, char auxiliary)
{
    if (n == 1)
    {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    
    // Move n-1 disks from source to auxiliary using destination as temporary
    towerOfHanoi(n - 1, source, auxiliary, destination);
    
    // Move the largest disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    
    // Move n-1 disks from auxiliary to destination using source as temporary
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main()
{
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    
    cout << "\nSteps to solve Tower of Hanoi with " << n << " disks:\n";
    cout << "Rods: A (source), B (auxiliary), C (destination)\n";
    cout << "----------------------------------------\n";
    
    towerOfHanoi(n, 'A', 'C', 'B');
    
    // Calculate and display total moves
    int totalMoves = (1 << n) - 1;  // 2^n - 1
    cout << "----------------------------------------\n";
    cout << "Total number of moves: " << totalMoves << endl;
    
    return 0;
}
