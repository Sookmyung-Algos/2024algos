#include <iostream>
#include <bitset>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    bitset<33554432> B;
    int i;
    while (cin >> i) {
        if (!B[i]) {
            B[i] = 1;
            cout << i << ' ';
        }
    }
    return 0;
}
