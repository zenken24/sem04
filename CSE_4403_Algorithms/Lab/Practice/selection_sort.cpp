#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 
using ll = long long; 

void selection_sort(vector<ll> &val){
    int n = (int)val.size();
    for(int i = 0; i < n; i++){
        int minIdx = i; 
        for(int j = i + 1; j < n; j++){
            if(val[j] < val[minIdx]){
                minIdx = j;
            }
        }
        if(minIdx != i){
            swap(val[i], val[minIdx]);
        }
    }
}

int main(){
    int n; 
    cin >> n; 
    vector<ll> val(n);
    for(auto &value: val){
        cin >> value; 
    }

    selection_sort(val);
    for(ll value : val){
        cout << value << endl; 
    }
    return 0;
}