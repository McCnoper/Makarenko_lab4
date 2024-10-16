#include <iostream>
#include<algorithm>

using namespace std;
int main() {
    int sizeArr=20;
    int arr[sizeArr];
    for(int i=0;i<sizeArr;i++){
        cout<<"Введіть "<<i+1<<" елемент: ";
        cin>>arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=0;i<sizeArr;i++){
            cout<<arr[i]<<" ";
    }
}
