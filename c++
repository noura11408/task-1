#include <iostream>
using namespace std;

int main() {
    int n;              
    float percentage, sum = 0;

    cout << "Enter number of juice: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Write the percentage of juice #" << (i + 1) << ": ";
        cin >> percentage;
        sum += percentage;
    }

    float average = sum / n;
    cout << "The final answer is: " << average << "%" << endl;

    return 0;
}
