// basics.cpp
#include <bits/stdc++.h>
using namespace std;

void modify(int *arr){
    arr[0]= arr[0]+5;
}

int main(){
int arr[] = {10,12,14,3};
modify(arr);
cout << arr[0] << endl;
    return 0;
}