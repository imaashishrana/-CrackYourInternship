
class Solution {
public:
   int findDuplicate(vector<int>& nums) {
        while (nums[0] != nums[nums[0]]) {
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }
};


Example: 
Suppose nums = [2, 1, 3, 3, 4].

Initially, nums[0] = 2 and nums[nums[0]] = nums[2] = 3. The condition nums[0] != nums[nums[0]] is true.
Swap nums[0] and nums[nums[0]], resulting in nums = [3, 1, 2, 3, 4].
Now, nums[0] = 3 and nums[nums[0]] = nums[3] = 3. The condition nums[0] != nums[nums[0]] is false.
The loop exits, and the function returns nums[0], which is 3.
Thus, the duplicate number in the array is 3.
