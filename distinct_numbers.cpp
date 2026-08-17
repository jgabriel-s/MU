#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    vector<int> nums;

    for (int i = 0; i < n; i++){
        int x; cin >> x; nums.push_back(x);
    }

    sort(nums.begin(), nums.end());

    int distinct_numbers = 0;
    int last_number = 0;

    for (auto i : nums){
        if (i != last_number){
            distinct_numbers++;
            last_number = i;
        }
    }

    cout << distinct_numbers << endl;

    return 0;
}