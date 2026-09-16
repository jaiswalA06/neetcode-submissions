class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1, mid;

        while(start <= end){
            mid = start + (end-start)/2; //optimized calculation of mid for large   start and end
            if (nums[mid] < target){
                start = mid+1;
            }

            else if (nums[mid]>target){
                end = mid-1;
            }

            else{
                return mid;
            }
        }
        return -1;
    }   
};
