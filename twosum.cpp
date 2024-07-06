#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
vector <int> ans;
    for(int i=0; i<nums.size() -1; i++) {
        if(target == nums[i] + nums[i+1]) {

        }
    }

    }
int main() {
    vector <int> arr = {3,2,4};
    vector <int> ans = twoSum(arr,6);
    for(int i=0; i<ans.size(); i++) {
        cout << i << " ";
    }
    return 0;
}