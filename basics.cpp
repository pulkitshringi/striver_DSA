// basics.cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cout << "Enter n: ";
cin >> n;
int arr[n];
for(int i =0;i<n;i++){
    cin >> arr[i];
}
cout << arr[n]; // runtime error
    return 0;
}