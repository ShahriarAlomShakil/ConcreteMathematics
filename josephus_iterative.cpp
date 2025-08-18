#include <iostream>
using namespace std;

int josephusIterative(int n, int k)
{
    int result = 0;
    for (int i = 2; i <= n; i++)
    {
        result = (result + k) % i;
    }
    return result + 1;
}

int main()
{
    int n;
    int k = 2;
    cout << "Enter number of people: ";
    cin >> n;
    cout << "Survivor position: " << josephusIterative(n, k) << endl;
    return 0;
}
