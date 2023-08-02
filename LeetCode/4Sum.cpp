#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> result;
    int n = nums.size();
    
    if (n < 4)
        return result;
    
    sort(nums.begin(), nums.end());
    
    for (int a = 0; a < n - 3; ++a) {
        // Skip duplicate values for 'a'
        if (a > 0 && nums[a] == nums[a - 1])
            continue;
        
        for (int b = a + 1; b < n - 2; ++b) {
            // Skip duplicate values for 'b'
            if (b > a + 1 && nums[b] == nums[b - 1])
                continue;
            
            int target_2sum = target - nums[a] - nums[b];
            int left = b + 1;
            int right = n - 1;
            
            while (left < right) {
                int two_sum = nums[left] + nums[right];
                
                if (two_sum == target_2sum) {
                    result.push_back({nums[a], nums[b], nums[left], nums[right]});
                    
                    // Skip duplicate values for 'c'
                    while (left < right && nums[left] == nums[left + 1])
                        ++left;
                    // Skip duplicate values for 'd'
                    while (left < right && nums[right] == nums[right - 1])
                        --right;
                    
                    ++left;
                    --right;
                } else if (two_sum < target_2sum) {
                    ++left;
                } else {
                    --right;
                }
            }
        }
    }
    
    return result;
}

int main() {
    vector<int> nums = {1, -2, -5, -4, -3, 3, 3, 5};
    int target = -11;
    vector<vector<int>> result = fourSum(nums, target);

    // Displaying the result
    for (const auto& quadruplet : result) {
        for (int num : quadruplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
