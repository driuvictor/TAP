#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;          

    int v[100];        
    for (int i = 0; i < n; i++)
        cin >> v[i];   
    int x;
    cin >> x;          

    int poz = -1;

    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            poz = i;
            break;
        }
    }

    if (poz != -1)
        cout << poz;
    else
        cout << -1;

    return 0;
}
