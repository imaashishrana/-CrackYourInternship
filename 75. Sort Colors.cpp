//USING 3 POINTER APPROACH 

class Solution {
public:
    void sortColors(vector<int>& nums) {
       int i=0;
       int j=0;
       int k=nums.size()-1;

       while(j<=k){
        
        if(nums[j]==1){
            j++;
        }
        else if(nums[j]==2){
            swap(nums[j],nums[k]);
            k--;
        } else{
            //nums[j]==0
            swap(nums[j],nums[i]);
            i++,j++;
        }
       }
    }
};


//The problem is to sort an array nums containing 0s, 1s, and 2s (the "Dutch National Flag" problem).

Example
Input
nums = [2, 0, 2, 1, 1, 0]

Output
nums = [0, 0, 1, 1, 2, 2]

Explanation
Initialization:

i = 0 (pointer to place 0s)
j = 0 (current element being considered)
k = nums.size() - 1 = 5 (pointer to place 2s)
First iteration (j = 0):

nums[j] = 2
Swap nums[j] with nums[k]: swap(nums[0], nums[5])
nums becomes [0, 0, 2, 1, 1, 2]
Decrement k: k = 4
Do not increment j since the new nums[j] needs to be processed
Second iteration (j = 0):

nums[j] = 0
Swap nums[j] with nums[i]: swap(nums[0], nums[0])
nums remains [0, 0, 2, 1, 1, 2]
Increment both i and j: i = 1, j = 1
Third iteration (j = 1):

nums[j] = 0
Swap nums[j] with nums[i]: swap(nums[1], nums[1])
nums remains [0, 0, 2, 1, 1, 2]
Increment both i and j: i = 2, j = 2
Fourth iteration (j = 2):

nums[j] = 2
Swap nums[j] with nums[k]: swap(nums[2], nums[4])
nums becomes [0, 0, 1, 1, 2, 2]
Decrement k: k = 3
Do not increment j since the new nums[j] needs to be processed
Fifth iteration (j = 2):

nums[j] = 1
No swap needed
Increment j: j = 3
Sixth iteration (j = 3):

nums[j] = 1
No swap needed
Increment j: j = 4
The loop terminates since j > k. The final sorted array is [0, 0, 1, 1, 2, 2].
