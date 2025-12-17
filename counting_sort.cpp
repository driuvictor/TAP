#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Introdu numarul de elemente: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Introdu elementele: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    vector<int> count(maxVal + 1, 0);
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    int index = 0;
    for (int i = 0; i <= maxVal; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }

    cout << "Vectorul sortat: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
