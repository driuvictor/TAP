#include <iostream>
using namespace std;

int partiționare(int a[], int stanga, int dreapta) {
    int pivot = a[dreapta];
    int i = stanga - 1;
    for (int j = stanga; j < dreapta; ++j) {
        if (a[j] <= pivot) {
            ++i;
            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        }
    }
    int tmp = a[i + 1];
    a[i + 1] = a[dreapta];
    a[dreapta] = tmp;
    return i + 1;
}

void sortează(int a[], int stanga, int dreapta) {
    if (stanga < dreapta) {
        int p = partiționare(a, stanga, dreapta);
        sortează(a, stanga, p - 1);
        sortează(a, p + 1, dreapta);
    }
}

int main() {
    int n;
    if (!(cin >> n)) return 0;
    int* a = new int[n];
    for (int i = 0; i < n; ++i) cin >> a[i];

    sortează(a, 0, n - 1);

    for (int i = 0; i < n; ++i) {
        if (i) cout << " ";
        cout << a[i];
    }
    cout << "\n";

    delete[] a;
    return 0;
} 