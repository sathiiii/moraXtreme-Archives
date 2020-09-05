#include <bits/stdc++.h>

using namespace std;


int main() {
    int n, t;
    long sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) {
            cin >> t;
            // Sum up the main and off diagonal elements
            // An element will be in the main diagonal when its indices i = j and in the off diagonal when its indices i = n - j - 1
            if (i == j || i == n - j - 1)
                sum += t;
        }
    cout << sum;
    return 0;
}
