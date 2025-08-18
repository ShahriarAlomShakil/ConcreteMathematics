#include <iostream>
using namespace std;

int main()
{
    int n;
    int k = 2;
    cout << "Enter number of people: ";
    cin >> n;

    int result = 0;
    for (int i = 2; i <= n; i++)
    {
        result = (result + k) % i;
    }

    cout << "Survivor position: " << result + 1 << endl;
    return 0;
}
