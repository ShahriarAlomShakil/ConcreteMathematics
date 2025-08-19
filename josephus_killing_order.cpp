#include <iostream>
#include <vector>
using namespace std;

void josephusKillingOrder(int n, int k) {
    vector<int> people;
    
    // Initialize the circle of people
    for (int i = 1; i <= n; i++) {
        people.push_back(i);
    }
    
    int pos = 0;
    cout << "Killing order: ";
    
    while (people.size() > 1) {
        pos = (pos + k - 1) % people.size();
        cout << people[pos] << " ";
        people.erase(people.begin() + pos);
        
        if (pos >= people.size()) {
            pos = 0;
        }
    }
    
    cout << "\nSurvivor: " << people[0] << endl;
}

int main() {
    int n, k;
    
    cout << "Enter number of people: ";
    cin >> n;
    cout << "Enter step size (k): ";
    cin >> k;
    
    josephusKillingOrder(n, k);
    
    return 0;
}
