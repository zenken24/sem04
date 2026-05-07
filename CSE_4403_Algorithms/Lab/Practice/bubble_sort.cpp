#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using ll = long long; 
void bubble_sort(vector<ll> &val){
    int n = (int)(val.size());
    for(int i = 0; i < n-1 ; i++){
        bool swapped = false; 
        for(int j = 0; j < n - 1 - i; j++){
           if(val[j+1] < val[j]){
            swap(val[j], val[j+1]);
           swapped = true;  
        }
    }
        if(!swapped)
        break;
    }

}
int main() {
	int n; 
    cin >> n;
    vector<ll> val(n);
    for(auto &value : val){
        cin >> value;
    }

    bubble_sort(val); 
    for(ll value : val){
        cout << value << endl; 
    }
	return 0;
}

