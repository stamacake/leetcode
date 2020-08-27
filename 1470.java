/*
Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn].
*/

class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] ans = new int[nums.length];
        for(int i=0, j = nums.length/2, k=0;i<nums.length/2; i++, j++, k+=2){
            ans[k]=nums[i];
            ans[k+1]=nums[j];
        }
        return ans;
    }
}
