#include <iostream>
#include <vector>
using namespace std;

// Function prototype
int maxSubArraySum(const std::vector<int>& nums);

int main() {
    // Create a vector with the given integers
    std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    // Call the function and print the result
    int result = maxSubArraySum(nums);
    cout << "Maximum subarray sum: " << result << endl;

    return 0;
}

int maxSubArraySum(const std::vector<int>& nums) {
    if (nums.empty()) {
        // Handle the case when the vector is empty
        return 0;
    }

    int max_so_far = nums[0], max_ending_here = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        max_ending_here = std::max(nums[i], max_ending_here + nums[i]);
        max_so_far = std::max(max_so_far, max_ending_here);
    }

    return max_so_far;
}