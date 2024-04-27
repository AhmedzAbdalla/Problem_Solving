class Solution {
public:
    int search(vector<int>& nums, int target) {
        int result=-1;
        bool flag = false;

        int left=0;
        int right=nums.size()-1;


        while(left <= right )
        {
            int mid = left + (right - left) /2;
            if(nums[mid] == target)
            {
               result = mid;
               break;
            }
            else if(nums[mid] <= target)
            {
                left = mid +1;
            }
            else 
            {
                right = mid -1;
            }
        }
        return result;
        
    }
};