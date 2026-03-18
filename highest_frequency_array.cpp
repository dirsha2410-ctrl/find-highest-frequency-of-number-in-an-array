#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1, 3, 2, 3, 4, 1, 3, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> freq;

    // Count frequencies
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Find element with highest frequency
    int maxFreq = 0, number = -1;
    for (auto it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            number = it.first;
        }
    }

    cout << "Number with highest frequency: " << number 
         << " (appears " << maxFreq << " times)" << endl;

    return 0;
}