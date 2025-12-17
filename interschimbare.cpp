#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    cout << "cate nr ai? ";
    cin >> n;
    int v[100];
    for (i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (v[i] > v[j]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux; } } }
    cout << "vector sorat ";
    for (i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}
