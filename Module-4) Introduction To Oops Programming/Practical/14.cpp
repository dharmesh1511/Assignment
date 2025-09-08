#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // Array to store integers
    int sum = 0;
    float average;

    cout << "Enter " << n << " integers:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; // Add to sum
    }

    average = static_cast<float>(sum) / n; // Calculate average

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
