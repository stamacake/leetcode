// Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).

class Solution {
    public int maxProduct(int[] nums) {
        int a1=0,a2=0, t = 0;
        if(nums[0]<nums[1]){ 
            a1=nums[0];
            a2 = nums[1];
        } else {
            a2=nums[0];
            a1 = nums[1];
        }
        
        for(int i=2;i<nums.length;i++){
            if(nums[i]>a1) a1 = nums[i];
            
            if(a1>a2){
                t = a1;
                a1 = a2;
                a2 = t;
            }
        }
        return (a1-1)*(a2-1);
    }
}
