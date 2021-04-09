#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, x, A[11100];
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &A[i]);
    }
    scanf("%d", &x);

    int lo = 0, hi = n;
    while(lo < hi) {
        int md = (lo+hi)/2;

        if(x <= A[md]) {
            hi = md;
        }
        else {
            lo = md+1;
        }

    }

    cout << "lower bound at " << hi << endl;
}

