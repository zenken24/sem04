#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using ll = long long; 

void insertion_sort(vector<ll> &val){
    int n = (int)val.size();
    for(int i = 1; i < n; i++){
        ll key = val[i];
        int j = i - 1; 
        while(j >= 0 && key > val[j]){
            val[j+1] = val[j];
            j--;
        }
        val[j+1] = key; 
    }
}

int main(){
    int n; 
    cin >> n; 
    vector<ll> val(n);
    for(auto &value : val){
        cin >> value; 
    }

    insertion_sort(val);
    for(ll value : val){
        cout << value << endl; 
    }
    return 0;
}