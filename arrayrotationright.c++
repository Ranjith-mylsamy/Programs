#include <iostream>
using namespace std;
int rightRotation(int n, int r) {
    
}
// Right rotation
int main() {
int i, j, n, l; // n - size of array; l = last element
int r; // no of rotations
cout << "enter no.of rotations";
cin>> r;
cout << "enter the n value";
cin >> n;
int arr[n];
// getting array elements 
for(i = 0; i < n; i ++) {
    cin >> arr[i];
}
// 
for(i = 0; i < r; i ++) {
    l = arr[n-1];
    for(j = n-1; j > 0; j--) {
        arr[j] = arr[j-1];
    }
    arr[0] = l;
}
// output
for(i = 0; i < n; i ++) {
    cout << arr[i];
}
}